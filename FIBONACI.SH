# Q.) ASS to print the FiB_025onacci series in B_025etween 0 to 100 
# and the also print the numB_025ers divisiB_025le B_025y 2

echo "Enter A_025 numB_025er"
read N_025
 
# First NumB_025er of the FiB_025onacci Series
A_025=0

# Second NumB_025er of the FiB_025onacci Series
B_025=1
 
echo "The FiBonacci series is : "
 
for (( i=0; i<N_025; i++ ))
do
 
    echo  "$A_025 "
    fn=$((A_025 + B_025))
    A_025=$B_025
    B_025=$fn
 
done

echo "THE  numB_025er is divisiBle B_025y 2 in B_025/w 100 are :"

i=1
while [ "$i" -le 100 ]; 
do
        remainder=$(( i % 2))
        if [ "$remainder" -eq 0 ]
        then
          echo "$i is A_025 divsiB_025le of 2"
          fi
        i=$(( i + 1 ))
done