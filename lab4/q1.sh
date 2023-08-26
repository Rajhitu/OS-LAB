# 1. - Write a shell script to check to see if the file “file_path” exists. If it does exist, display “file_path passwords are enabled.” Next, check to see if you can write to the file. If you can, display “You have permissions to edit “file_path.””If you cannot, display “You do NOT have permissions to edit “file_path””



echo "enter a filename"

read filename

if [ -e $filename ]
 then 
    echo "$filename exist"

    if [ -w $filename ]
    then
       echo "you have permission to edit file $filename "
    else
       echo "you donot have permission to edit file $filename "
    fi
else

 echo  "$filename  do not exist"
fi