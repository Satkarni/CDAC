#!/bin/bash

for((i=0;i<5;i++))
    do
        echo "Enter number"
        read input[$i]
    done

sum=0
for((i=0;i<5;i++))
    do
        sum=$(($sum+${input[$i]}))
    done
avg=$(($sum/5))
echo "Average is: $avg"
