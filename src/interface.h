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
    QTextBrowser *textgame;
    QLineEdit *textinput;
signals:

};

#endif // INTERFACE_H
