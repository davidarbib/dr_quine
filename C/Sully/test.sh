#!/bin/bash

rm -rf build
mkdir build
cp Sully.c ./build/
#clang -g3 -Weverything -Wall -Wextra -Werror ./build/Sully.c -o ./build/Sully
gcc -O0 -ggdb3 -Wall -Wextra -Werror ./build/Sully.c -o ./build/Sully
#gcc -Wall -Wextra -Werror ./build/Sully.c -o ./build/Sully
cd build
./Sully
