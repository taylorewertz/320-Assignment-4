CS320 Assignment 4

Files:
prog4_1.c
prog4_2.lua
prog4_3.sh
README.md
cs320programmingrubric

PROG4_1.c:
    The program is a lua intrepeter written in c. The first argument of the command line is lua test program to check if the lua intrepeter works. To compile this program the user will enter gcc <file.c> -llua -lm -ldl -L<directory of libraries> -I<directories of headers>. To run this program the user will enter ./a.out FILENAME, where FILENAME is the name of test file to see if the interpreter is working correctly.
    
PROG4_2.lua:
    this program is the fizzbuzz problem, the purpose of the program is to print out numbers from 1 to 100, having one number on each line, but if a number is divisible by 3 it will print "Fizz" instead of the number. if the number is divisible by 5 if will print "Buzz" instead of the number and if divisible by 5 and 3 it will print out "FizzBuzz". Lua programs dont need to compile but the user will need to make sure the intrepeter from part 1 works and is compiled. to run the program the user will enter ./a.out prog4_3.lua and it will print out.