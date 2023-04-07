#!/bin/bash

# Fails the script if any command failes
set -e

# Conditional on command result
if ! command; then
    echo "Handle command failure"
else
    echo "Command succeeded"
fi


# ANSI Colors
GREEN="\033[32m"
RED="\033[31m"
RESET="\033[39m"

echo -e "${GREEN}this text is green${RESET}"
echo -e "This ${RED}error${RESET} is red"


# Inline arithmetic
index=2
file="$((index-1))"
echo "$file"
((a++))


# Redirect STDOUT
command > /tmp/somefile
# Redirect STDERR
command 2> /dev/null
# Redirect STDOUT and STDERR
command > /tmp/somefile 2>&1
# Redirect output to STDERR
echo "stderr output" >&2


# Capture command output in variable
result=$(netstat -an | grep WAIT)
echo "$result"


# Use awk to print columns
awk '{print $1}' file.txt
# cat file.txt
# > hello goodbye
# awk '{print $1}' file.txt
# > hello
# awk '{print $2}' file.txt
# > goodbye
