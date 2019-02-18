#!/bin/bash
# Script to build all of the C++ programs for this set of parallelism tests.
echo 'Building main.exe...'
g++ main.cpp -o main.exe
echo 'Building mainFutures.exe...'
g++ -pthread mainFutures.cpp -o mainFutures.exe
echo 'Building mainStdThread.exe...'
g++ -pthread mainStdThread.cpp -o mainStdThread.exe