// Qt Deps
#include <QApplication>

// General Deps
#include <character.hpp>
#include <mainwindow.hpp>

int main(int argCount, char* argVector[])
{
    QApplication textfur(argCount, argVector);
    textfur.setApplicationDisplayName("Textfur");
    textfur.setApplicationVersion("0.1");
    textfur.setDesktopFileName("org.text.fur.desktop");
    textfur.setWindowIcon(QIcon::fromTheme("editor"));

    MainWindow window;
    window.show();

    textfur.exec();
}
