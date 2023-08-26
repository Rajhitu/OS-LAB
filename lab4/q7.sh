# 7.Take two number from command line argument and check whether they equal or not . If not equal
#print the greater value
echo "enter  2 number"

read a b

if [[ $a -ne $b ]]
 then
    echo "$a is not equal to $b"
if [[ $a -gt $b ]]
then
echo "$a is   greater than 10"
else
echo "$a is  not  greater than 10"


fi
fi

