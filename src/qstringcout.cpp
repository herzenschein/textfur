#include "qstringcout.h"

std::ostream& operator<<(std::ostream& out, const QString &str)
{
    out << str.toStdString();
    return out;
};
