#!/bin/bash

if [ $# -lt 1 ] ; then
    echo "You forgot to give an argument"
    exit
fi

echo "Your input was <<$1>>"
echo "Second was <<$2>>"
