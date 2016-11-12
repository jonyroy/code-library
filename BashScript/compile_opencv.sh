#!/bin/bash
echo "Compiling Opencv Source Code"
if [[ $1 == *.c ]]
then
    gcc  `pkg-config --cflags opencv` -o `basename $1 .c` $1 `pkg-config --libs opencv`
    #pkg-config --cflags opencv returns where opencv installed
    #pkg-config --libs opvecv returns the opencv libraries
    # basename $1 .cpp returns filename without extension
elif [[ $1 == *.cpp ]]
then
   g++  `pkg-config --cflags opencv` -o `basename $1 .cpp` $1 `pkg-config --libs opencv`
   # basename $1 .cpp returns filename without extension
else
    echo "Please compile only .c or .cpp files"
fi
echo "Type ./${1%.*} to execute the Program in the command Prompt."
# ${1%.*} removes file extension