// Qt Deps
#include <QApplication>
#include <QQmlApplicationEngine>

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

    QQmlApplicationEngine engine;
    engine.load(QUrl("qrc:main.qml"));
//     MainWindow window;
//     window.show();

    textfur.exec();
}
