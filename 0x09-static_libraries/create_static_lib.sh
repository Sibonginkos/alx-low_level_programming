#!/bin/bash
gcc -Wall -Wextra -pedantic -Werror - Wextra -std=gnu89 -o *.c
ar -rc liball.a *.o
