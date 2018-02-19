#!/bin/bash
# Test script to check if files are different, then preform action

cmp ~/.vimrc ~/dotfiles/.vimrc

if [ $? -eq 0 ];then
    echo "Equal"
else
    echo "Not Equal"
fi
