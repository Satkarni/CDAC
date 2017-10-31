#!/bin/bash

echo "Please enter first number"
read x

echo "Please enter second number"
read y
while [ $y -eq 0 ]
do
    echo "Denominator cannot be zero"
    echo "Please enter second number"
    read y
done
var3=`echo "scale=2;$x/$y" | bc`
echo "Result:$var3"
