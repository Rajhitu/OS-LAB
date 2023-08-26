# 6. write a sheel script programme input time in second and
#  convert it into hour min andsecond
echo "enter the time in second"


read a


hr=`expr $a / 60 / 60`
a=`expr $a % 3600`



min=`expr $a / 60`
a=`expr $a `
echo " hr=$hr min=$min sec=$a"