#pragma once

#include <QObject>
#include <QtQml/qqml.h>

class TextManager : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    QML_SINGLETON

    Q_PROPERTY(QString areaText MEMBER areaText NOTIFY areaTextChanged)

public:
    QString areaText = "Welcome to my furry game!";

signals:
    void areaTextChanged();
};
