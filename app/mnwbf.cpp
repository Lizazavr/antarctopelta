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

txt->strs.push_front();

}

