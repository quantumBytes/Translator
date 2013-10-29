#include "Translator/dictionary.h"

Word::Word(string &w, tID ID) :
    m_me(w),
    m_wID(ID)
{}

Word::Word(tID ID) :
    m_wID(ID)
{}

//template <template <typename> class Container>
Dictionary::Dictionary(string _language) :
    m_language(_language)
{}

//template <template <typename> class Container>
bool Dictionary::addWord(string word, tID ID) {
    Word ins(word, ID);
    m_words.push_back(ins);
    return true;
}

//template <template <typename> class Container>
Word &Dictionary::getWord(tID ID) {
    Word obj(ID);
    return m_words.find2(obj);
}

void Dictionary::WeightWords(string _word)
{
//    size_t list_size = m_words.size();
//    for(register size_t i = 0; i < list_size; ++i) {
//        cout << _word << " <> " << m_words.at(i).getStr() << " : "
//             << LevenshteinDistance(_word, m_words.at(i).getStr()) << endl;
//    }
//    cout << endl;
}

//template <template <typename> class Container>
bool Dictionary::LoadFromFile(char *path_to_file) {

}

//template <template <typename> class Container>
bool Dictionary::SaveToFile(char *path_to_file) {

}
