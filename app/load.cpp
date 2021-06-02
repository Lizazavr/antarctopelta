#include <stdio.h>
#include <string.h>
#include "common.h"
#include "text.h"
#include "_text.h"
#include <iostream>
#include <fstream>
/**
 * Загружает содержимое указанного файла
 */
void load(text txt, char *filename)
{
    std::ifstream f;
    f.open(filename);

    if (!f.good()) {
        std::cerr << "The file " << filename << " cannot be opened\n";
        return;
    }

    /* Удаляем предыдущее содержимое */
    remove_all(txt);

    std::string buf;

    while (f.good()) {
        f.getline(&buf[0], MAXLINE);
        append_line(txt, buf);
    }

    f.close();
}
