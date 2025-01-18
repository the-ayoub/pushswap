while true
do
    rm test.txt
    ARG=$(shuf -i 1-5 -n 5 | tr '\n' ' '); ./push_swap $ARG > test.txt
    VAR=$(wc -l < test.txt)

    if [ $VAR -lt 10 ]; then
        echo "\033[42mLíneas generadas: $VAR\033[0m"  # Fondo verde
    else
        echo "\033[41mLíneas generadas: ARGS:$ARG  -- $VAR\033[0m"  # Fondo rojo
    fi
done
#sh test.sh
