#!/bin/bash

echo "Enter number"
read x
for((i=2;i<$x;i++))
do
    if [ $(($x%$i)) -eq 0 ]
    then 
        echo "Number is not prime"
        break
    fi
done
    if [ $i -ge $x ]
    then
        echo "Number is prime"
    fi

