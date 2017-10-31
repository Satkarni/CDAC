#!/bin/bash

echo "Enter first number:"
read x
echo "Enter second number:"
read y 

tmp=$x
x=$y
y=$tmp

echo $x
echo $y

