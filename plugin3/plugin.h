#include <plugin_if.h>

class plugin3:public QObject,public PluginInterface
{
    Q_OBJECT
    Q_INTERFACES(PluginInterface)
    Q_PLUGIN_METADATA(IID "demo.PluginInterface" FILE "plugin.json")
public:
    QString getResource() override;
};
