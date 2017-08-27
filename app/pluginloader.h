#ifndef PLUGINLOADER_H
#define PLUGINLOADER_H

#include <QString>
#include <QHash>
#include <plugin_if.h>

class PluginLoader
{
	QHash<QString,PluginInterface* > loadedPlugins;
public:
	PluginLoader()=default;
	~PluginLoader()=default;
	bool loadPlugin(const QString& path);
	PluginInterface* pluginAt(const QString& name);
};

#endif
