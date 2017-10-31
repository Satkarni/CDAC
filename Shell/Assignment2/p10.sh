#!/bin/bash

echo "Please enter file"
read x

if [ -e $x ]
then
    if [ -d $x ]
    then 
        echo "File type: directory"
    fi
    if [ -f $x ]
    then 
        echo "File type: file"
    fi
    if [ -s $x ]
    then 
        echo "File size > zero"
    else
        echo "File size: 0"
    fi
    if [ -r $x ]
    then 
        echo "File permissions: read enabled"
    else
        echo "File permissions: read disabled"
    fi
    if [ -w $x ]
    then 
        echo "File permissions: write enabled"
    else
        echo "File permissions: write disabled"
    fi
    if [ -x $x ]
    then 
        echo "File permissions: execution enabled"
    else
        echo "File permissions: execution disabled"
    fi
else
    echo "File does not exist"
fi

