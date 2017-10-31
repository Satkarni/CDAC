#!/bin/bash

echo "Enter year:"
read x

if [ $(($x%4)) -eq 0 ]
then
   if [ $(($x%400)) -ne 0 ]
   then 
        if [ $(($x%100)) -eq 0 ]
            then
        echo "$x is not a leap year"
        else
            echo "$x is a leap year"
        fi
   else
    echo "$x is a leap year"
    fi
else
    echo "$x is not a leap year"
fi
