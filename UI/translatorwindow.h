#ifndef TRANSLATORWINDOW_H
#define TRANSLATORWINDOW_H

#include <QMainWindow>

namespace Ui {
class TranslatorWindow;
}

class TranslatorWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit TranslatorWindow(QWidget *parent = 0);
    ~TranslatorWindow();
    
private:
    Ui::TranslatorWindow *ui;
};

#endif // TRANSLATORWINDOW_H
