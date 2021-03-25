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

    // Create textgame area

    // This one always shows the description of your home
    home = new QTextBrowser;
    homebox->addWidget(home);
    home->setText("You are at home.");
    home->setAlignment(Qt::AlignHCenter);
    home->setMinimumWidth(130);
    home->setFocusPolicy(Qt::NoFocus);

    // This one shows the textgame content
    textgame = new QTextBrowser;
    rbox->addWidget(textgame);
    textgame->setMinimumWidth(400);
    textgame->setFocusPolicy(Qt::NoFocus);

    // This one transfers input from user to textgame
    textinput = new QLineEdit;
    rbox->addWidget(textinput);
    textinput->displayText();
    textinput->setFocus();

    // Temporary: if user presses enter (signal),
    // current text from textinput gets added to textgame (slot)
    QObject::connect(
                textinput,
                &QLineEdit::returnPressed,
                this,
                &Interface::appendText
                );


}

// This is specifically for the textinput > textgame transmission,
// hence why no parameter is needed
void Interface::appendText(){
    textgame->append(textinput->text());
    textinput->clear();
}

// This is a general append function
void Interface::addText(QString gametext)
{
    textgame->append(gametext);
}

// Hypothetical: this is a placeholder for validating input.
// If a "wait for user input" is implemented, this can be
// switched to a simple if value == character then return 0 else return 1
// Reminder: refactor if possible
QString Interface::getText()
{
    QString inputtext = textinput->text();
    if (textinput->isModified()) emit textinput->returnPressed();
    textinput->clear();
    return inputtext;
}

// These are for later
// This changes the value of comfyvalue dynamically
// It needs to cast to QString in order to fit a QLineEdit
void Interface::changeComfort(Interface *parent, int comfvalue)
{
    parent->comfyvalue->setText(QString::number(comfvalue));
}

// This changes the value of the species if need be;
// Possibly unneeded, we'll see
void Interface::changeSpecies(Interface *parent, QString specvalue)
{
    parent->speciesvalue->setText(specvalue);
}
