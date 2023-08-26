# Q2) WASS to find the area of two circle, what is the smallest distance between the circumference of two circle, if the origin of one circle is (0,0) and other is (0,1).

echo "enter the value of radiius of 2 circle"

read a b 


area1=`echo 3.14 \* $a \* $a|bc`
area2=`echo 3.14 \* $b \* $b|bc`

echo " areaof 1st circle is $area1 "
echo " areaof 2ndst circle is $area2 "

short=`expr  $a - $b - 1`
if [ $short -lt  0 ]
then
short=`expr $short \* -1`
fi

echo "shortest distance b/w the circumference of 2 circle is $short"
