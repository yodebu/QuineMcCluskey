#!/bin/bash
# Snigdha Majhee
# 13/CSE/07
# 3rd SEMESTER

clear
echo "welcome to Quine-McCluskey Algorithm Minimiser for minterms, this program will ask about the number of variables and will generate random values from your Roll Number and  minimise them using the Quine-Mccluskey's Algorithm..."

make clean
make all
g++ converter.cpp -o converter
./converter
./qm tcase.txt
