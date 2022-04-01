#!/bin/bash
gc -Wall -pedantic -Werror -Wextra -c *.c
gcc -c *.c
ar -rc liball.a *.o
ranlib liball.a
