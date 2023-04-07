#!/bin/bash

# Double brackets seem to work faster than single brackets
# Double brackets prevent needing to escape inside conditional

# ===============
# Files
# ===============
file=testfile.txt

if [[ -a $file ]]; then echo "file exists"; fi
if [[ -s $file ]]; then echo "file has size>0 bytes"; fi
if [[ -d $file ]]; then echo "file is a directory"; fi
if [[ -f $file ]]; then echo "file is a regular file"; fi
if [[ -h $file ]]; then echo "file is a symlink"; fi

if [[ fileA -nt fileB ]]; then echo "fileA is newer than fileB (by modification time)"; fi


# ===============
# Strings
# ===============
stringA="hello"
stringB="goodbyte"

if [[ $stringA ]]; then echo "stringA exists and has length>0"; fi
if [[ ! $stringA ]]; then echo "stringA has length 0 or doesn't exist"; fi
if [[ -v $stringA ]]; then echo "stringA has been set"; fi
if [[ -z $stringA ]]; then echo "stringA has length 0"; fi
if [[ "$stringA" == "$stringB" ]]; then echo "Strings are equal"; fi
if [[ "$stringA" != "$stringB" ]]; then echo "Strings are different"; fi
if [ $stringA \> $stringB ]; then echo "stringA is lexicographically greater than stringB (requires escaping)"; fi
if [[ $stringA > $stringB ]]; then echo "stringA is lexicographically greater than stringB"; fi
if [[ $stringA =~ ^[a-z]+$ ]]; then echo "stringA is all lowercase"; fi


# ===============
# Integers    '-eq’, ‘-ne’, ‘-lt’, ‘-le’, ‘-gt’,‘-ge’
# ===============
var=1
if [[ $var -eq 1 ]]; then echo "var equals 1"; fi
