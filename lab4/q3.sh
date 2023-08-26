
# 3. Modify the previous script to that it accepts the file or directory name as an argument instead of prompting the user to enter it.


echo "enter a filename"

filename=test.txt


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