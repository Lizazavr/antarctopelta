#include "_text.h"

/**
 * Создает новый текстовый объект
 * @returns текст
 */
text create_text()
{
    text txt;


    txt = (_list *) malloc(sizeof(_list));

    txt = new _list;

    txt->cursor = (_crsr *) malloc(sizeof(_crsr));

    txt->myList = std::list<std::string>();


    txt->cursor->line = txt->myList.end();
    txt->cursor->position = 0;
    
    free(txt);

    return txt;
}
