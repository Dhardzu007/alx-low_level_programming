#!/bin/bash
gcc -fPIC -c *.c
gcc -Wall -pedantic -Werror -Wextra -fPIC *.c -shared -o liball.so
