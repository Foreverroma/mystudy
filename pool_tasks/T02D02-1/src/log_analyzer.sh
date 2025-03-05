#!/bin/bash

echo "путь к файлу логов"
read WAY
if [[ ! -f "$WAY/files.log" ]]; then #Проверка есть ли файл
    echo "неправильный путь, Тут нет этого файла"
    exit 1
fi
#количество строк
STRING=$(wc -l "$WAY/files.log" | cut -d' ' -f1) #/home/krazzmax/2day/src/files.log
#количество уникальных файлов
UNIQUE_FILES=$(awk -F ' - ' '{print $1}' files.log | sort | uniq | wc -l) #awk вытаскивает столбец sort сортирует uniq оставляет только уникальные wc -l считает количество строк
#количество уникальных хешей
UNIQUE_HASH=$(awk -F ' - ' '{print $4}' files.log | sort | uniq | wc -l) #awk вытаскивает столбец sort сортирует uniq оставляет только уникальные wc -l считает количество строк
echo "$STRING $UNIQUE_FILES $UNIQUE_HASH"
