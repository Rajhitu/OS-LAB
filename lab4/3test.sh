# WASS to input 'n' and calculate the following serise
# 2!/2 +3!/3 + 4!/4 .....n



echo enter n
read n
sum=0
for val in `seq 2 1 $n`
do
    ognum="$val"
    fact=1
    while [ $val -gt 1 ]
    do
        fact=$((fact * val))  #fact = fact * num
        val=$((val - 1))      #num = num - 1
    done
    sum=$((sum+$fact/$ognum))
done
echo $sum