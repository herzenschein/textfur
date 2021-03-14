#ifndef INTERFACE_H
#define INTERFACE_H

#include <QWidget>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QLabel>
#include <QLineEdit>
#include <QTextBrowser>
#include <QString>

class Interface : public QWidget
{
    Q_OBJECT
public:
    explicit Interface(QWidget *parent = nullptr);
    QHBoxLayout *main;
    QVBoxLayout *lbox;
    QVBoxLayout *rbox;
    QHBoxLayout *tbox;
    QFormLayout *info;
    QHBoxLayout *homebox;
    QLabel *title;
    QLabel *comfy;
    QLineEdit *comfyvalue;
    QLabel *nchar;
    QLineEdit *ncharvalue;
    QLabel *species;
    QLineEdit *speciesvalue;
    QTextBrowser *home;
    QLineEdit *textinput;
    QTextBrowser *textgame;
    void addText(QString gametext);
};

#endif // INTERFACE_H
