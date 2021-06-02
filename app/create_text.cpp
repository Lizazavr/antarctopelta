#include "_text.h"

/**
 * Создает новый текстовый объект
 * @returns текст
 */
text create_text()
{
    text txt;
    
        if ((txt = (list *) malloc(sizeof(list))) == NULL)
    {
        fprintf(stderr, "Not enough memory!\n");
        exit(EXIT_FAILURE);
    }
txt = new _list;

    if ((txt->cursor = (crsr *) malloc(sizeof(crsr))) == NULL)
    {
        fprintf(stderr, "Not enough memory!\n");
        exit(EXIT_FAILURE);
    }
    
    txt->length=0;

    txt->myList = std::list<std::string>();


    txt->cursor->line = txt->myList.end();
    txt->cursor->position = 0;

    return txt;
}
