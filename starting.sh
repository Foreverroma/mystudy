#!/bin/bash

gcc -std=c11 -Wall -Wextra -Werror "$1" -lm
if [ $? -ne 0 ]; then
	echo "Compilation bad!"
	exit 1
else
    echo "Compilation Good"
fi

clang-format -n "$1"
if [ $? -ne 0 ]; then
	echo "Style bad"
	exit 1
else
    echo "Style Good!"
fi

valgrind --leak-check=full ./a.out
