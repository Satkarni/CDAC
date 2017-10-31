#!/bin/bash

echo "Please enter file name"
read x

if [ -d $x ]
then
    echo "$x is directory"
fi

if [ -f $x ]
then
    echo "$x is a file"
fi
