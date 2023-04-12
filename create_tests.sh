#!/bin/bash

src_dir="./srcs"
test_dir="./tests"

if [ ! -d "$test_dir" ];
then
    mkdir $test_dir
fi

for dir in $(ls $src_dir)
do
    mkdir -p "$test_dir/$dir"

    for file in $(ls "$src_dir/$dir");
    do
        name=$(echo $file | cut -d'.' -f1)
        ext=$(echo $file | cut -d'.' -f2)

        touch "$test_dir/$dir/test_$name.$ext"
    done
done
