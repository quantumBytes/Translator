#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include "Translator/dictionary.h"

class translator
{

private:
    Dictionary *Langs;  //Puntero a diccionarios, cada diccionario es un lenguaje

public:
    translator();

    void AddLanguage(char *path_to_dict);

    void getSimilars(string word);
};

#endif // TRANSLATOR_H
