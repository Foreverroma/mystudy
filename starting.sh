#!/bin/bash

gcc -Wall -Wextra -Werror "$1"
if [ $? -ne 0 ]; then
	echo "Compilation bad!"
fi
echo "Compilation Good"

clang-format -n "$1"
if [ $? -ne 0 ]; then
	clang-format -i "$1"
	echo "Style correct"
fi
echo "Style Good!"

valgrind --leak-check=full ./a.out


