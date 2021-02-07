#include "pluginfactory.h"

PluginFactory::PluginFactory(QObject *parent) : AbstractPluginFactory(parent) {

}

AbstractPluginClass *PluginFactory::getClass() {
    return new PluginClass;
}
//Q_EXPORT_PLUGIN2(abstractpluginfactory, AbstractPluginFactory)
