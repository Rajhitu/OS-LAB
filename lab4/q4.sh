# 4. Enter two number if first is greater than second one perform subtraction and division other wise perform addition and multiplication
echo "enter  2 number"

read a b


if [[ $a -gt $b ]]
 then
 sub=`expr $a - $b`
 div=`expr $a / $b`
    echo "$a - $b = $sub"
     echo "$a / $b = $div"

  else
     add=`expr $a + $b`
     mul=`expr $a \* $b`
     echo "$a + $b = $add"
     echo "$a * $b = $mul"


fi