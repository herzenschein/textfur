// Qt Deps
#include <QGuiApplication>
#include <QIcon>
#include <QQmlApplicationEngine>

int main(int argCount, char* argVector[])
{
    QGuiApplication textfur(argCount, argVector);
    textfur.setApplicationDisplayName("Textfur");
    textfur.setApplicationVersion("0.1");
    textfur.setDesktopFileName("org.text.fur.desktop");
    textfur.setWindowIcon(QIcon::fromTheme("editor"));

    QQmlApplicationEngine engine;
    engine.load(QStringLiteral("qrc:/Textfur/qml/main.qml"));

    textfur.exec();
}
