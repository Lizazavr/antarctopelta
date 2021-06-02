/**
 * ple.cpp -- выводит текст строки после курсора
 *
 * Кузнецова Е.
 */
#include <stdio.h>
#include <string.h>
#include "_text.h"
#include <string>

using namespace std;
void rp(text txt) {
    list<string>::iterator h = txt->cursor->line;
    string a(*h);

    //Выводим текст от позиции курсора до конца строки
    a.assign(a, txt->cursor->position, a.length()-txt->cursor->position);//векто
      printf("%s",a.c_str());
}

