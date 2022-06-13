#!/bin/bash
gcc -c -fPIC -Wall -Werror -Wextra -pedantic *.c
gcc -shared -Wall -Werror -Wextra -pedantic *.o -o liball.so
