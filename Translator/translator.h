#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include "Translator/dictionary.h"

#define N_ELM 7

class translator
{

private:
    C_List<Dictionary> m_Langs;  //Puntero a diccionarios, cada diccionario es un lenguaje
    size_t  m_Orig,  //Posición Diccionario Origen
            m_Dest;  //Posición Diccionario Destino

public:
    translator();

    void AddDict(char *_path_to_dict);

    void getSimilars(string _word, C_List<WeightedWord> &_list);

    void setOrigin(size_t _orig);

    void setDestiny(size_t _dest);

    void invert();

    void translate(Word::tID _ID, string &_result);
};

#endif // TRANSLATOR_H
