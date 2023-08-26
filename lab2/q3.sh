# Exercise_3 - 
# a. Store the output of the command hostname in a variable. Display This script is running on _. where _ is the output of the hostname command.
# b. Store the output of the command current directory in a variable. Display This script is running on _. where _ is the output of the current directory command.
# c.  Store the output of the command path in a variable. Display This script is running on _. where _ is the output of the path command

host=$(hostname) 
dec=$PWD
path=$PATH
echo " HOST NAME------> $host"
echo " DESC NAME------> $dec"
echo " PATH  NAME------> $path"
