#!bin/bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -c *.c
ar ac liball.a *.o
