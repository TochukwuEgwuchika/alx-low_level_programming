#!/bin/bash
gcc -Werror -Wall -Wextra -pedantic -c *.c
ar -rc liball.a *.o
