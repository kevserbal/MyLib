#ifndef PLUGINFACTORY_H
#define PLUGINFACTORY_H

#include <QObject>
#include "abstractpluginfactory.h"
#include "pluginclass.h"
#include "MyLib_global.h"

class MYLIB_EXPORT PluginFactory : public AbstractPluginFactory {
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "cops.demo.AbstractPluginFactory/1.0")
    Q_INTERFACES(AbstractPluginFactory)

public:
    explicit PluginFactory(QObject *parent = nullptr);
    AbstractPluginClass *getClass();
signals:

};

#endif // PLUGINFACTORY_H
