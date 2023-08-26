# 5. Check whether a give filename is directory or not, if not check the permission on the files, if  #it has write permission append some data to it.

echo "enter a filename"

read filename

if [ -d $filename ]
 then 
    echo "$filename is a directory"
 else
 echo  "$filename is not a durectory"
    if [ -w $filename ]
    then
    echo "file have write permision"
    echo "write something to append"
    cat >> $filename
    else
    echo "file doesnt have write permsiion"
   fi
fi

ls -l $filename