#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <string>
#include "Translator/LevenshteinDistance.h"
#include "DataStructs/avl_tree.h"
#include <fstream>

using namespace std;

class Word {
public:
    typedef size_t tID;

private:
    string m_me;

    tID m_wID;

public:
    Word(string &w, tID ID = 0);

    Word(tID ID = 0);

    inline void setID(tID &ID) {
        m_wID = ID;
    }

    inline void setStr(string &_str) {
        m_me = _str;
    }

    inline string &getStr() {
        return m_me;
    }

    inline tID &getID() {
        return m_wID;
    }

    inline bool operator==(Word &w) {
        return m_wID == w.m_wID;
    }

    inline bool operator<(Word &w) {
        return m_wID < w.m_wID;
    }

    friend ostream &operator<<(ostream &_os, Word &_obj) {
        _os << _obj.m_me << endl;
        return _os;
    }
};

//template <template <typename> class Container>
class Dictionary
{
public:
    typedef Word::tID tID;

private:
    string m_language;
    AVL_tree<Word> m_words;

public:
    Dictionary();

    Dictionary(string language);

    bool addWord(string word, tID ID);

    Word &getWord(tID ID);

    void WeightWords(string _word, AVL_tree<WeightedWord> &_tree);

    bool LoadFromFile(char *path_to_file);

//    bool SaveToFile(char *path_to_file);

};

#endif // DICTIONARY_H
