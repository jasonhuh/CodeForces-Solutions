#!/bin/bash
PROG_NAME=$1
clang++ -std=c++17 -Wall $PROG_NAME -o main; ./main