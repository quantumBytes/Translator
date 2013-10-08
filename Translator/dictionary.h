#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <string>

using namespace std;

class Word {
public:
    typedef size_t tID;

private:
    string m_me;
    tID m_wID;

public:
    Word(string &w, tID ID = 0);

    inline void setID(tID &ID) {
        m_wID = ID;
    }

    inline string &getStr() {
        return m_me;
    }

    inline tID &getID() {
        return m_wID;
    }

    inline bool operator ==(Word &w) {
        return m_wID == w.m_wID;
    }
};

template <typename DE>
class Dictionary
{
public:
    typedef Word::tID tID;

private:
    string m_language;
    DE<Word> m_words;

public:
    Dictionary(string Language);

    bool addWord(string word, tID ID);

    tID addWord(string word);

    bool getWord(tID ID, Word *ptr);

//    tID searchWord(string word);

    bool LoadFromFile(char *path_to_file);

    bool SaveToFile(char *path_to_file);

};

#endif // DICTIONARY_H
