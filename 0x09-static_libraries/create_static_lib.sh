#!bin/bash
gcc -c -Wall -Werror -Wexxtra *.c
ar -rc liball.a *.o
ranlib liball.a
