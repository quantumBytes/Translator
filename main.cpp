//#include <QApplication>
#include <iostream>
#include "Translator/dictionary.h"
//#include "UI/translatorwindow.h"

using namespace std;

int main(int argc, char *argv[])
{
/************** Translator **************/
    Dictionary eng("english");
    eng.addWord("abducted", 1);
    eng.addWord("abhorred", 2);
    eng.addWord("bank", 3);
    eng.addWord("banker", 4);
    eng.addWord("block", 5);

    eng.WeightWords("benk");



/************** .Translator **************/


/************** GUI START **************/
//    QApplication a(argc, argv);
//    TranslatorWindow w;
//    w.show();

//    return a.exec();
/**************** .GUI ******************/
    return 0;
}
