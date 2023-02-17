#include "wordbreakclass.h"
#include "ui_wordbreakclass.h"
#include "word_breakclass.h"


WordBreakClass::WordBreakClass(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WordBreakClass)
{
    ui->setupUi(this);
}

WordBreakClass::~WordBreakClass()
{
    delete ui;
}


void WordBreakClass::on_pushButton_clicked()
{
    Word_BreakClass word;
    QString name = ui->lineEdit->text();
    QString txt = QString::fromStdString(word.print_text());
    if(word.check_word(name.toStdString() , "")){
        ui->textBrowser->setText(txt);
    }
}

