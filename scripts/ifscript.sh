#!/bin/bash

back=`wc -l $1`
n1=${back:0:1}

if [ $n1 = "1" ];then
    echo "single line"
else
    echo "multi lines"
fi
