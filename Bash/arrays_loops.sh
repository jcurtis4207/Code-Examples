#!/bin/bash

# create array
arr=(1 2 3 4)

# output all array elements
echo "${arr[@]}"

# output one element
echo "${arr[2]}"

# iterate over array
for i in "${arr[@]}"
    do echo "$i"
done

# while loop
j=0
while [[ $j -lt 3 ]]
do
    echo "cheese"
    j=$((j + 1))
done

# loop through files in a directory
for file in /src/*; do
    if [[ -f "$file" ]]; then
        echo "This is a file: $file"
    elif [[ -d "$file" ]]; then
        echo "This is a directory: $file"
    fi
done
