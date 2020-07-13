#!/bin/bash

# create array
arr=(1 2 3 4)

# output all array elements
echo ${arr[@]}

# output one element
echo ${arr[2]}

# iterate over array
for i in ${arr[@]}
do echo $i
done

# conditional
# true=1, false=0
# -eq=equals, -ne=not equals, -lt=less than, -gt=greater than
for i in ${arr[@]}
do
	if [ $i -lt 2 ]; then
	echo $i "< 2"
	elif [ $i -gt 2 ]; then
	echo $i "> 2"
	else
	echo $i "= 2"
	fi
done

# while loop
j=0
while [ $j -lt 3 ]
do
	echo "cheese"
	j=$(($j + 1))
done
