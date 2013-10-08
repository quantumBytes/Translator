#include "translatorwindow.h"
#include "ui_translatorwindow.h"

TranslatorWindow::TranslatorWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TranslatorWindow)
{
    ui->setupUi(this);
}

TranslatorWindow::~TranslatorWindow()
{
    delete ui;
}
