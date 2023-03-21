#!/bin/bash

COMPILEDFILE="compiled.exe"
echo "filed compiled successfuly to $COMPILEDFILE :)"
gcc whatisonram.c -o $COMPILEDFILE
echo "--- RUNING FILE ---"
./$COMPILEDFILE
