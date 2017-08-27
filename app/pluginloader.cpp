#include "pluginloader.h"
#include <QDir>
#include <QLibrary>
#include <QPluginLoader>
#include <QtDebug>

bool PluginLoader::loadPlugin(const QString& path)
{
    qInfo() << path;
	if (QLibrary::isLibrary(path))
	{
        QPluginLoader loader{path};

        qInfo() << loader.isLoaded();
        qInfo() << loader.errorString();
        PluginInterface *plugin = qobject_cast<PluginInterface*>(loader.instance());
        if (plugin)
        {
            auto metadata = loader.metaData().value("MetaData").toObject();
            auto pluginName = metadata.value("name").toString();
            this->loadedPlugins[pluginName] = plugin;
            return true;
        }
	}
	return false;
}

PluginInterface* PluginLoader::pluginAt(const QString& name)
{
    if(this->loadedPlugins.contains(name))
    {
        return this->loadedPlugins[name];
    }
    return nullptr;
}
