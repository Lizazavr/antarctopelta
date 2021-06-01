#include <stdio.h>
#include <assert.h>
#include "common.h"
#include <string.h>
#include "text.h"

static void show_line(int index, std::string contents, int cursor, void *data);

/**
 * Выводит содержимое указанного файла на экран
 */
void showlenght(text txt)
{
    process_forward(txt, show_line, NULL);
}
int a=0;

/**
 * Выводит содержимое указанного файла на экран
 */
static void show_line(int index, std::string contents, int cursor, void *data)
{
    /* Функция обработчик всегда получает существующую строку */

    
    /* Декларируем неиспользуемые параметры */
    UNUSED(cursor);
    UNUSED(index);
    UNUSED(data);

    /* Выводим строку на экран */
   
    a++;
    if (a % 2 == 1){
    printf("%s", contents);
    }
}

