#!/bin/bash

rm -rf build
mkdir build
cp Sully.c ./build/
clang -g3 -Wall -Wextra -Werror ./build/Sully.c -o ./build/Sully
cd build
./Sully
cd ..
od -c Sully.c > Sully.c.hex
od -c build/Sully_4.c > Sully_4.c.hex
