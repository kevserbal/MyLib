#include "pluginclass.h"

PluginClass::PluginClass(QObject *parent) : AbstractPluginClass(parent)
{

}

void PluginClass::callPluginFunc() {
    qDebug() << "call plugin func";
    emit this->myPluginSignal("My plugin message from Plugin Class");
}
