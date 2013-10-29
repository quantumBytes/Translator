#include "translator.h"

translator::translator()
{}

void translator::AddDict(char *_path_to_dict)
{
    Dictionary tmp;
    m_Langs.push_back(tmp);
    m_Langs.last().LoadFromFile(_path_to_dict);
}

void translator::getSimilars(string _word, C_List<WeightedWord> &_list)
{
    AVL_tree<WeightedWord> tree;
    m_Langs.at(m_Orig).WeightWords(_word, tree);
    tree.take_minor(N_ELM, _list);
}


void translator::setOrigin(size_t _orig)
{
    m_Orig = _orig;
}

void translator::setDestiny(size_t _dest)
{
    m_Dest = _dest;
}


void translator::translate(Word::tID _ID, string &_result)
{
    _result = m_Langs.at(m_Dest).getWord(_ID).getStr();
}
