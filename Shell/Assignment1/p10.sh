#!/bin/bash


echo "Enter number"
read input
while [ $input -gt 0 ]
do
    sum=$(($sum+$input%10))
    input=$(($input/10))
done
echo "Sum of digits:$sum"
