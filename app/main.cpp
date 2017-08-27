#include <QCoreApplication>
#include <QDebug>
#include <qlogging.h>
#include "pluginloader.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    PluginLoader loader;
    qInfo() << loader.loadPlugin(a.applicationDirPath()+"/../plugin1/libplugin1.so");
    qInfo() << loader.loadPlugin(a.applicationDirPath()+"/../plugin2/libplugin2.so");
    qInfo() << loader.loadPlugin(a.applicationDirPath()+"/../plugin3/libplugin3.so");

    for (auto&& name:{"Plugin1","Plugin2","Plugin3"})
    {
    	auto plugin = loader.pluginAt(name);
    	if(plugin)
    	{
    		qInfo() << plugin->getResource();
    	}
    }
    qInfo() << "End of program";
    return 1;
}

