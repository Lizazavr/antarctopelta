/**
 * p1.cpp -- добавляет новую строку перед текстом
 *
 * Кузнецова Е.
 */
#include <string>
#include <cstring>
#include <cstdlib>
#include "_text.h"

using namespace std;
void mnwbf(text txt)
{
auto a =" ";
txt->myList.push_front(a);

}

