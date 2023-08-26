# 3. Write a shell programme input 2 no. and swap them without using third variable

echo "enter 2 no."

read a b


echo "before swapping values are $a $b"
temp=`expr $a`
a=`expr $b`
b=`expr $temp`
# temp=$a
# a=$b
# b=$temp



echo "after swapping values are $a $b"



echo "enter 2 no."

read a b


echo "before swapping values are $a $b"

a=`expr $a + $b`
b=`expr $a - $b`
a=`expr $a - $b'

# temp=$a
# a=$b
# b=$temp




echo "after swapping values are $a $b"


