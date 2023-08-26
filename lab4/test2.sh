# 2. print the following pattern

# rows=4
# for((i=1; i<=rows; i++))
# do
#   for((j=1; j<=i; j++))
#   do
#     echo -n "* "
#   done
#   echo
# done

# c=1
# while :
# do
# echo $c
# ((c++))
# done

# for v in {20..1..1}
# do
# echo $v
# done

c=1
until [ $c -gt 10 ]
do
echo $c
((c++))
done
