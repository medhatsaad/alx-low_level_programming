#!/bin/sh
gcc -c -Wall -Werror -Wextra -pedantic *.c
ar -rcs liball.a *.o
