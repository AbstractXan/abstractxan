#!/bin/bash

rm ../site/*
rm ./main

g++ -DDEBUG -Wall -Wpedantic -Wshadow -Wextra -g -Og main.cpp -o main

./main -a
