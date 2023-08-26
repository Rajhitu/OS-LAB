# 4. write a shell programe to input 2 no. and perform arithmetic operations

echo "enter 2 no."

read a b



sum=`expr $a + $b`
echo "sum= $sum"

sub=`expr $a - $b`
echo "sub= $sub"

divide=`expr $a / $b`
echo "divide= $divide"

mul=`expr $a \* $b`
echo "mutliply= $mul"








