#!/bin/bash

echo "Введите название файла в котором будем искать(без точек)"
read WAY
if [[ ! -f "$WAY".txt ]]; then #Проверка есть ли файл
    echo "Такого файла нет"
    exit 1
fi
echo "На какой строке ищем?"
read STRING
STRING_CHECK=$(wc -l "$WAY".txt | cut -b 1)
if [ "$STRING" == "" ]; then #Проверка на ввод
    echo "Ты ничего не ввел"
    exit 1
    elif [ "$STRING" -gt "$STRING_CHECK" ]; then #Проверка есть ли строка
        echo "Такой строки нет"
        exit 1
fi
echo "На что меняем?"
read SWAP
sed -i "$STRING s/.*/$SWAP/" "$WAY".txt #замена строки с записью
#sed "$STRING s/.*/$SWAP/" "$WAY".txt #замена строки с выводом на экран без записи
ROAD=$(pwd) #путь до корня
SIZE=$(stat -c%s "$WAY.txt") #размер
DATE=$(stat -c%y "$WAY.txt" | cut -b 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16) #обрезанная дата (оставляем только 1-16 символ)
SHA256=$(sha256sum "$WAY".txt | cut -d' ' -f1) # хеш сумма и обрезаем её до первого пробела
LOGG="files.log" #название файла с логами
echo "$ROAD/$WAY.txt - $SIZE - $DATE - $SHA256 - sha256" >> "$LOGG" #выводим результат на дозапись в файл
