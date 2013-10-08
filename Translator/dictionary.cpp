#include "dictionary.h"

Word::Word(string &w, tID ID) :
    m_me(w),
    m_wID(ID)
{}

template <typename DE>
Dictionary<DE>::Dictionary(string Language) :
    m_language(Language)
{}

template <typename DE>
bool Dictionary<DE>::addWord(string word, tID ID) {
    Word ins(word, ID);
    m_words.insert(ins);
}

template <typename DE>
Dictionary<DE>::tID Dictionary<DE>::addWord(string word) {

}

template <typename DE>
bool Dictionary<DE>::getWord(tID ID, Word *ptr) {

}

template <typename DE>
bool Dictionary<DE>::LoadFromFile(char *path_to_file) {

}

template <typename DE>
bool Dictionary<DE>::SaveToFile(char *path_to_file) {

}
