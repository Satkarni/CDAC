#!/bin/bash

echo "Please enter number"
read x

if [ $(($x%2)) -eq 0 ]
then
    echo "Number is even"
else
    echo "Number is odd"
fi
