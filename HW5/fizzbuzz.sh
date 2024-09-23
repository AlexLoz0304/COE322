#!/bin/bash
#Alexander Lozano
#AJL4846
#Alozano0304

if [ $# -lt 1 ] ; then
    echo "You forgot to give an argument"
    exit
fi

if [ $1 = "-h" ] ; then
    echo "Usage: ./fizzbuzz.sh nnn"
    echo "where nnn is a positive integer"
    exit
fi

if [ $1 -lt 1 ] ; then
    echo "Your input was not a positive integer"
    exit
fi
 
icpx fizzbuzz.cpp -o ./fizzbuzz

echo $1 | ./fizzbuzz

