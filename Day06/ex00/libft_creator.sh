#!/bin/bash

gcc -c -Wall -Wextra -Werror *.c
ar rc libstr.a *.o
ranlib libstr.a
rm *.o
