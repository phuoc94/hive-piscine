#!/bin/sh
cc="cc"
files=*.c
flags="-c -Wall -Werror -Wextra"
lib_name="libft.a"

$cc $flags $files
ar ruv $lib_name  *.o
ranlib $lib_name
rm *.o
