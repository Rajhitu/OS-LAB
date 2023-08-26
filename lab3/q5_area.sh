# 5. write a shell script programme input radius of a circle 
# and find out its area and perimeter

echo "enter the radius"

read a 

area=`echo 3.14 \* $a \* $a|bc`
echo "area=$area"

perim=`echo 2\* 3.14 \* $a |bc`
echo "perimeter=$perim"