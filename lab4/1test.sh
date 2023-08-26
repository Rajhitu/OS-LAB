# Q1) WASS to input three numbers and find the greatest among them make provision for same numbers.


echo "enter 3 no.s"
read a b c


if [ $a -gt $b ] && [ $a -gt $c ]
then
    echo "$a is greatest"
elif [ $b -gt $a ] && [ $b -gt $c ]
then
     echo "$b is greatest"
elif [ $c -gt $a ] && [ $c -gt $b ]
then
      echo "$b is greatest"
else
    echo "all the three numbers are same and is $a "
fi