#!/bin/bash
echo "Compiling C++ or C code"
if [[ $1 == *.c ]]
 #$1 is Called Positional Parameter.
 #see more at http://www.tldp.org/LDP/abs/html/othertypesv.html
 then
 gcc $1 -o `basename $1 .c` # Compile C Source Code
elif [[ $1 == *.cpp ]]
 then
 g++ $1 -o `basename $1 .cpp` # Compile C++ Source Code
fi
name=$(echo $1 | cut -f 1 -d '.') # Remove The File Extension
#=======================================================#
#                                    Explanation of Line 14
#echo get the value of the variable $1 and send it to standard output
#We then grab the output and pipe it to the cut command
#The cut will use the . as delimiter (also known as separator) for cutting the string into segments and by -f we select which segment we want to have in output
#Then the $() wrapper will get the output and return it's value
#The returned value will be assigned to the variable named name
#Reference=https://stackoverflow.com/questions/12152626/how-can-remove-the-extension-of-a-filename-in-a-shell-script
#=======================================================#
echo "To Run The Program Type ./$name In The Command Prompt."