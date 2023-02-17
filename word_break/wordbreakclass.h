#ifndef WORDBREAKCLASS_H
#define WORDBREAKCLASS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class WordBreakClass; }
QT_END_NAMESPACE

class WordBreakClass : public QMainWindow
{
    Q_OBJECT

public:
    WordBreakClass(QWidget *parent = nullptr);
    ~WordBreakClass();

private slots:
    void on_pushButton_clicked();

private:
    Ui::WordBreakClass *ui;
};
#endif // WORDBREAKCLASS_H
