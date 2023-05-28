#pragma once

#include <QObject>
#include <QtQml/qqml.h>

class Character : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    QML_SINGLETON

    Q_PROPERTY(QString name MEMBER name NOTIFY nameChanged)
    Q_PROPERTY(QString species MEMBER species NOTIFY speciesChanged)
    Q_PROPERTY(int comfyVar MEMBER comfyVar NOTIFY comfyVarChanged)

public:
    QString name = "";
    QString species = "";
    int comfyVar = 0;

signals:
    void nameChanged();
    void speciesChanged();
    void comfyVarChanged();
};
