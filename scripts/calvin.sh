#!/bin/bash 

day=$(date +%Y/%m/%d)
clear=false

function getRandomDate() {
  days=$(( ($(date +%s) - $(date -d "1985/11/18" +%s) )/(60*60*24) ))
   echo $(date -d "1985/11/18 + $((RANDOM%$days)) days" +%Y/%m/%d)
  }

  function displayPic() {
 ##
  # Stolen from http://blog.z3bra.org/2014/01/images-in-terminal.html
   ##
 
 W3MIMGDISPLAY="/usr/lib/w3m/w3mimgdisplay"
  FONTH=12 
   FONTW=8  
 COLUMNS=`tput cols`
  LINES=`tput lines`
   IMG="/tmp/cab.gif"

 read width height <<< `echo -e "5;$IMG" | $W3MIMGDISPLAY`
  max_width=$(($FONTW * $COLUMNS))
   max_height=$(($FONTH * $(($LINES - 2)))) # substract one line for prompt
 if test $width -gt $max_width; then
 height=$(($height * $max_width / $width))
   width=$max_width
 fi
  if test $height -gt $max_height; then
  width=$(($width * $max_height / $height))
 height=$max_height
  fi

   w3m_command="0;1;0;0;$width;$height;;;;;$IMG\n4;\n3;"
 tput cup $(((($height/$FONTH)) - 2)) 0 
  printf $w3m_command|$W3MIMGDISPLAY

 }

 function getComic() {
 # grep -m1 '900px" width="100%" src=' | \
   url=$(curl -s http://www.gocomics.com/calvinandhobbes/$1 | \
  grep -m1 '<picture class="item-comic-image">' | \
 grep -o 'https*://[^"]* ')
  if [ ! -z $url ]; then
  curl -s  $url -o "/tmp/cab.gif" && return 0 || return 1
   else
   return 1
 fi
   }

   function displayComic() {
  if getComic $day ; then 
  if $clear; then clear; fi
 ps -o comm= -p $(ps -o ppid= -p $PPID) |grep terminology > /dev/null && tycat /tmp/cab.gif || displayPic
  else
  return 1
   fi
  }

  getRandomComic() {
 eval "day=$(getRandomDate)"
  until displayComic $day;do
  echo "Fanns ingenting $day, försöker igen."
 eval "day=$(getRandomDate)"
  done 
 }

 function interactive() {
   clear=true
 displayComic $(date +%Y/%m/%d -d $1) || echo "Nåt blev fel..."
  while true
    do
    escape_char=$(printf "\u1b")
   echo "<--  $day -->, r eller q"|center.sh
  read -rsn1 mode # get 1 character
    if [[ $mode == $escape_char ]]; then
  read -rsn2 mode # read 2 more chars
    fi
   case $mode in
    'q') echo
    exit ;;
    'r') echo "Hämtar random Calvin & Hobbes..."
    getRandomComic #random
   ;;
   '[D')   eval "day=$(date +%Y/%m/%d -d "$day - 1 days")"
   echo "Hämtar $day"
  displayComic || printf "Finns inte..." ;; # left
  '[C')   eval "day=$(date +%Y/%m/%d -d "$day + 1 days")"
     displayComic || printf "Finns inte..."  ;; # right
     *) >&2 ;;
    esac
     done
    }

    if [ ! -z ${1+x} ]; then
   if [ ${1} = "-r"  ] || [ ${1} = "-R"  ];then
   echo "Hämtar random Calvin & Hobbes..."
     getRandomComic day
   elif [ ${1} = "-i"  ] || [ ${1} = "-I"  ];then
   day=${2:-$day }
     interactive ${2:-$day }
   else
   day=$(date +%Y/%m/%d -d $1)
     displayComic day || printf "Finns inte...\n\n"
   fi
     else
    displayComic day || printf "Finns inte...\n\n"
   fi
   printf "Calvin and Hobbes $day\n\n"


