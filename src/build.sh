#!/bin/bash

rm ../site/*
rm ../blog/*
rm ./main

g++ -DDEBUG -Wall -Wpedantic -Wshadow -Wextra -g -Og main.cpp -o main

./main -a
