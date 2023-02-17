/********************************************************************************
** Form generated from reading UI file 'wordbreakclass.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDBREAKCLASS_H
#define UI_WORDBREAKCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WordBreakClass
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WordBreakClass)
    {
        if (WordBreakClass->objectName().isEmpty())
            WordBreakClass->setObjectName("WordBreakClass");
        WordBreakClass->resize(1338, 703);
        WordBreakClass->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0.00961538 rgba(85, 0, 131, 255));"));
        centralwidget = new QWidget(WordBreakClass);
        centralwidget->setObjectName("centralwidget");
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(830, 210, 471, 401));
        textBrowser->setStyleSheet(QString::fromUtf8("font: 16pt \"MV Boli\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.00961538, y2:0, stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(137, 22, 203);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(155, 0, 1401, 91));
        label->setStyleSheet(QString::fromUtf8("font: 18pt \"Rockwell\";\n"
"background-color: qlineargradient(spread:pad, x1:0.551885, y1:0, x2:0.572308, y2:0.716, stop:0 rgba(199, 204, 207, 255), stop:1 rgba(245, 251, 255, 255));\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 230, 641, 71));
        label_3->setStyleSheet(QString::fromUtf8("font: 18pt \"Viner Hand ITC\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 350, 591, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 16pt \"SimSun\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.00961538, y2:0, stop:1 rgba(255, 255, 255, 255));"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 450, 201, 71));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.982955, stop:0 rgba(205, 6, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 16pt \"Viner Hand ITC\";\n"
"border:2px solid  qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.982955, stop:0 rgba(205, 6, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-radius:20px;\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 181, 91));
        label_2->setStyleSheet(QString::fromUtf8("font: 26pt \"Ravie\";\n"
"color: rgb(205, 6, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0.551885, y1:0, x2:0.572308, y2:0.716, stop:0 rgba(199, 204, 207, 255), stop:1 rgba(245, 251, 255, 255));\n"
""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(830, 140, 431, 61));
        label_4->setStyleSheet(QString::fromUtf8("font: 16pt \"Viner Hand ITC\";\n"
"color: rgb(255, 255, 255);"));
        WordBreakClass->setCentralWidget(centralwidget);
        textBrowser->raise();
        label_3->raise();
        lineEdit->raise();
        pushButton->raise();
        label_2->raise();
        label_4->raise();
        label->raise();
        menubar = new QMenuBar(WordBreakClass);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1338, 26));
        WordBreakClass->setMenuBar(menubar);
        statusbar = new QStatusBar(WordBreakClass);
        statusbar->setObjectName("statusbar");
        WordBreakClass->setStatusBar(statusbar);

        retranslateUi(WordBreakClass);

        QMetaObject::connectSlotsByName(WordBreakClass);
    } // setupUi

    void retranslateUi(QMainWindow *WordBreakClass)
    {
        WordBreakClass->setWindowTitle(QCoreApplication::translate("WordBreakClass", "WordBreakClass", nullptr));
        label->setText(QCoreApplication::translate("WordBreakClass", "break", nullptr));
        label_3->setText(QCoreApplication::translate("WordBreakClass", "Enter the word that you want to break it :", nullptr));
        pushButton->setText(QCoreApplication::translate("WordBreakClass", "Done", nullptr));
        label_2->setText(QCoreApplication::translate("WordBreakClass", " WORD", nullptr));
        label_4->setText(QCoreApplication::translate("WordBreakClass", "The new sentences :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WordBreakClass: public Ui_WordBreakClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDBREAKCLASS_H
