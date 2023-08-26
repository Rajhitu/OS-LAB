# 6.Take a number and whether it is greater than 10 or not, print the message accordingly


echo "enter a number"

read a

if [[ $a -gt 10 ]]
then 
    echo "$a is greater than 10"
else
echo "$a is not  greater than 10"
fi