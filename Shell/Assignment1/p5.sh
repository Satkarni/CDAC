#!/bin/bash

for((i=1;i<=5;i++))
do
    for((j=1;j<=5-$i;j++))
        do
            echo -n " "
        done
    for((k=1;k<=$i*2-1;k++))
        do
            echo -n "$i"
        done
echo
done
