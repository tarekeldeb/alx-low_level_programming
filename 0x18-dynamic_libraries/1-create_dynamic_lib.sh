#!/bin/bash
gcc -fpIC -c *.c
gcc -shared *.o -o liball.so
