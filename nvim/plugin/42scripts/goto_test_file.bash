filename="$(ls -rt *.c | tail -n1)"
# echo $filename
last_2="$(readlink -f $fileName | rev | cut -d/ -f2 | rev)"
# echo $last_2
finalFile="../../tests/$last_2/$filename"
# echo $finalFile
vim $finalFile
