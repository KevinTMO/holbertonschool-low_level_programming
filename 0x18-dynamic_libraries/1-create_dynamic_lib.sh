#!/bin/bash
gcc *.o -shared -o liball.so | gcc *.c -c -fpic
