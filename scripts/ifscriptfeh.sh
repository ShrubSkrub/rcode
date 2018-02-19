#!/bin/bash

back=`wc -l $1`
n1=${back:0:1}

if [ $n1 = "1" ];then
    echo "No problem"
else
    echo "Removing first line!"
    sed -i 1d $1
fi
