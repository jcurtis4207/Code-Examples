#!/bin/bash

# Method 1
function print_first_arg {
    echo "$1"
}
# print_first_arg jacob thomas
# > jacob

# Method 2
print_all_args () {
    echo "$@"
}
# print_all_args jacob thomas
# > jacob thomas

default_args () {
    cmd=${1:-nothing}
    echo "$cmd"
}
# default_args
# > nothing
# default args jacob
# > jacob

get_num_args () {
    if [[ $# -eq 0 ]]; then
        echo No args given
    else
        echo "Here's the args:" "$@"
    fi
}
# get_num_args
# > No args given
# get_num_args jacob
# > Here's the args: jacob
