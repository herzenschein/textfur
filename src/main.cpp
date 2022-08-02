// Qt Deps
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QIcon>

int main(int argCount, char* argVector[])
{
    QGuiApplication textfur(argCount, argVector);
    textfur.setApplicationDisplayName("Textfur");
    textfur.setApplicationVersion("0.1");
    textfur.setDesktopFileName("org.text.fur.desktop");
    textfur.setWindowIcon(QIcon::fromTheme("editor"));

    QQmlApplicationEngine engine;
    engine.load(QUrl("qrc:main.qml"));

    textfur.exec();
}
