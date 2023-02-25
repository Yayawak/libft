lastFileName=`find . -name '*.c' | ls -Art | tail -n1`

mainc="main.c"

if test -f "$lastFileName";
then
    echo "$lastFileName exists."

    if [[ $lastFileName == *.c ]]
    then
        echo "this file is c extension."

        if test -f "$mainc"
        then
            echo "Found $mainc file."
            rm $mainc
        fi

        gencPath=/Users/rio/jaime_projects/createMainFileC/generate_main_c.c
        `cp $gencPath ./main.c`

        insertTextAtLine() {
            row="$1"
            prevRow="$(expr $1 - 1)"
            text=$2

            newMainC=$(head -n $prevRow $mainc;
                echo $text;
                tail -n +$row $mainc;
            )
            echo "$newMainC" > "$mainc"
        }

        insertTextAtLine 3 "#include \"$lastFileName\""
        insertTextAtLine 7 "\t${lastFileName%.*}($1);"

        echo "$newMainC"

        gcc $mainc
        ./a.out

        # rm "$mainc"
    fi
else
    echo "$lastFileName does not exists."
fi

