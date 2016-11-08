#!/bin/bash

echo "Assignment #4-3, Taylor Ewertz, t_ewertz@yahoo.com"

gcc prog4_1.c -llua -lm -ldl -L /home/taylor/lua-5.3.3/src/ -I /home/taylor/lua-5.3.3/src

po=`./a.out $1`

co=`cat $2`

if [ "$po" == "$co" ]
then
	echo "Passed Test"
else
	echo "Test Failed"
fi
 
