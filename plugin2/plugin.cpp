#include "plugin.h"
#include <QFile>

QString plugin2::getResource()
{
    QFile f(":/samples/test2.txt");
    if(f.open(QIODevice::ReadOnly))
        return f.readAll();
    return "";
}
