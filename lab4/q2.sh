# 2. write a shell script that prompts the user for a name of a file or directory and reports if it is a regular file, a directory, or another type of file. Also perform an ls command against the file or directory with the long listing option.

echo "enter a filename"

read filename

if [ -d $filename ]
 then 
    echo "$filename is a directory"

   
 elif [ -f $filename ]
   then
    echo "$filename is a regular or ordinary file"
 else
 echo  "$filename is another type of file"
fi

ls -l $filename