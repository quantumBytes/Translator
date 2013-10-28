//#include <QApplication>
#include <iostream>
//#include "Translator/translator.h"
//#include "UI/translatorwindow.h"

using namespace std;

int main(int argc, char *argv[])
{
/************** Translator **************/

/************** .Translator **************/

/************** GUI START **************/
//    QApplication a(argc, argv);
//    TranslatorWindow w;
//    w.show();

//    return a.exec();
/**************** .GUI ******************/
    string  first = "Saturday",
            second = "Sunday";

    cout << LevenshteinDistance(first, second) << endl;

    return 0;
}
