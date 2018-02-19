#!/bin/bash
# Script to copy dotfiles from various locations and backup to gitrepo

echo "Copying .vimrc"
cp /home/shrub/.vimrc /home/shrub/dotfiles/.vimrc
echo "Copying .Xresources"
cp /home/shrub/.Xresources /home/shrub/dotfiles/.Xresources
echo "Copying .Xdefaults"
cp /home/shrub/.Xdefaults /home/shrub/dotfiles/.Xdefaults
echo "Copying .Xmodmap"
cp /home/shrub/.Xmodmap /home/shrub/dotfiles/.Xmodmap

# Rename i3 files upon copy
echo "Copying i3config"
cp /home/shrub/.config/i3/config /home/shrub/dotfiles/i3config
echo "Copying i3statusconfig"
cp /home/shrub/.config/i3status/config /home/shrub/dotfiles/i3statusconfig
echo "Finished copying files."
