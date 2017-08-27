#include "plugin.h"
#include <QFile>

QString plugin3::getResource()
{
    QFile f(":/samples/test3.txt");
    if(f.open(QIODevice::ReadOnly))
        return f.readAll();
    return "";
}
