/**
 * p1.cpp -- добавляет новую строку перед текстом
 *
 * Кузнецова Е.
 */
#include <string>
#include <cstring>
#include <cstdlib>
#include "_text.h"

#define MAXLINE 255
using namespace std;
void p1(text txt, const char *line)
{

string l(line);

if(l.length() > MAXLINE + 1){
fprintf(stderr, "Строка слишком длинная!\n");
} else
txt->myList.push_front(l);

}

