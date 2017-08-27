#include "plugin.h"
#include <QFile>

QString plugin1::getResource()
{
    QFile f(":/samples/test.txt");
    if(f.open(QIODevice::ReadOnly))
        return f.readAll();
    return "";
}
