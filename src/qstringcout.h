#ifndef QSTRINGCOUT_H
#define QSTRINGCOUT_H
#include <QString>
#include <ostream>

std::ostream& operator<<(std::ostream& out, const QString &str);

#endif // QSTRINGCOUT_H
