#!/bin/bash


echo "Enter number"
read input
cpin=$input
i=0
declare -a a
while [ $cpin -gt 0 ]
do
    a[$i]=$(($cpin%10))  
    i=$(($i+1))
    cpin=$(($cpin/10))
done
echo "Reverse of number:"
for var in "${a[@]}"
    do
          echo -n "${var}"
    done
echo
