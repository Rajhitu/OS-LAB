

fact=1

for((i=1; i<=210000; i++))
do
  c=0
  for((j=1; j<=i; j++))
  do
    if [ `expr $i % $j` -eq 0 ]
    then
     c=`expr $c + 1`
     fi

     if [ $i -eq 5 ]
     then 
     fact=`expr $fact \* $j`
     fi

       
  done
  if [ $c -eq 2 ]
  then
   echo "$i is prime"
   else
   
    echo "$i is not  prime"
    fi
done

echo "factorial of 5 is $fact"