// General Deps
#include "interface.h"

Interface::Interface(QWidget *parent) : QWidget(parent)
{
    // Create layouts
    main = new QHBoxLayout;
    lbox = new QVBoxLayout;
    rbox = new QVBoxLayout;
    tbox = new QHBoxLayout;
    info = new QFormLayout;
    homebox = new QHBoxLayout;

    // Set layout hierarchy
    this->setLayout(main);
    main->addLayout(lbox);
    main->addSpacing(10);
    main->addLayout(rbox);
    lbox->addLayout(tbox);
    lbox->addLayout(info);
    lbox->addLayout(homebox);

    // Create title
    title = new QLabel;
    tbox->addWidget(title);
    title->setText("<b>TEXTGAME</b>");
    title->setAlignment(Qt::AlignHCenter);

    // Create var labels
    comfy = new QLabel;
    comfy->setAlignment(Qt::AlignLeft);
    comfy->setText("<i>ComfyVar</i>");

    comfyvalue = new QLineEdit;
    comfyvalue->setMaximumWidth(70);
    comfyvalue->setReadOnly(true);
    comfyvalue->setText("Initial");

    nchar = new QLabel;
    nchar->setText("<i>Name</i>");

    ncharvalue = new QLineEdit;
    ncharvalue->setReadOnly(true);
    ncharvalue->setText("Your Name Here");

    species = new QLabel;
    species->setText("<i>Species</i>");

    speciesvalue = new QLineEdit;
    speciesvalue->setMaximumWidth(100);
    speciesvalue->setReadOnly(true);
    speciesvalue->setText("Human");

    info->addRow(comfy, comfyvalue);
    info->addRow(nchar, ncharvalue);
    info->addRow(species, speciesvalue);

    home = new QTextBrowser;
    homebox->addWidget(home);
    home->setText("You are at home.");
    home->setAlignment(Qt::AlignHCenter);
    home->setMinimumWidth(130);
    home->setFocusPolicy(Qt::NoFocus);

    textgame = new QTextBrowser;
    rbox->addWidget(textgame);
    textgame->setMinimumWidth(400);
    textgame->setFocusPolicy(Qt::NoFocus);

    textinput = new QLineEdit;
    rbox->addWidget(textinput);
    textinput->displayText();
    textinput->setFocus();

    QObject::connect(
                textinput,
                &QLineEdit::returnPressed,
                this,
                &Interface::appendText
                );


}

void Interface::appendText(){
    textgame->append(textinput->text());
    textinput->clear();
}

void Interface::addText(QString gametext)
{
    textgame->append(gametext);
}

QString Interface::getText()
{
    QString inputtext = textinput->text();
    if (textinput->isModified()) emit textinput->returnPressed();
    textinput->clear();
    return inputtext;
}

void Interface::changeComfort(Interface *parent, int comfvalue)
{
    parent->comfyvalue->setText(QString::number(comfvalue));
}

void Interface::changeSpecies(Interface *parent, QString specvalue)
{
    parent->speciesvalue->setText(specvalue);
}
