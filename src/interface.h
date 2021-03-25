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
    // So far, everything is public;
    // I'll worry about private and protected later.
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
    QString getText();
    void changeSpecies(Interface *parent, QString specvalue);
    void changeComfort(Interface *parent, int comfvalue);
    void appendText();
    void addText(QString gametext);

};

#endif // INTERFACE_H
