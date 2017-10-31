#!/bin/bash

echo "Enter first number:"
read x
echo "Enter second number:"
read y 

echo "Enter third number"
read z

if [ $x -gt $y ]
then
    if [ $x -gt $z ]
        then
          echo "$x is the maximum"
        else
            echo "$z is the maximum"
    fi
else 
    if [ $y -gt $z ]
        then 
            echo "$y is the maximum"
        else
            echo "$z is the largest"
    fi
fi
