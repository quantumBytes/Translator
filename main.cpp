//#include <QApplication>
#include <iostream>
#include "Translator/translator.h"
//#include "UI/translatorwindow.h"

using namespace std;

int main(int argc, char *argv[])
{
/************** Translator **************/
//    Dictionary eng("english");
////    eng.addWord("abducted", 1);
////    eng.addWord("abhorred", 2);
////    eng.addWord("bank", 3);
////    eng.addWord("banker", 4);
////    eng.addWord("block", 5);

////    cout << eng.getWord(5) << endl;

//    eng.LoadFromFile("espanol.txt");

//    AVL_tree<WeightedWord> tree;
//    eng.WeightWords("rango", tree);
////    tree.printIn();

//    C_List<WeightedWord> list;
//    tree.take_minor(5, list);

//    for(int i = 0; i < 5; ++i) {
//    cout << list.at(i).m_ID << " : " << list.at(i).m_weight << endl;
//    }

    translator trans;
    trans.AddDict("english.txt");
    trans.AddDict("espanol.txt");

    trans.setOrigin(0);
    trans.setDestiny(1);

    C_List<WeightedWord> list;
    trans.getSimilars("church", list);

    for(int i = 0; i < N_ELM; ++i) {
        cout << list.at(i).m_ID << " : " << list.at(i).m_weight << endl;
    }

    string result;
    trans.translate(list.at(0).m_ID, result);
    cout << result << endl;

/************** .Translator **************/


/************** GUI START **************/
//    QApplication a(argc, argv);
//    TranslatorWindow w;
//    w.show();

//    return a.exec();
/**************** .GUI ******************/
    return 0;
}
