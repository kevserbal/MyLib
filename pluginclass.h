#ifndef PLUGINCLASS_H
#define PLUGINCLASS_H

#include <QObject>
#include "abstractpluginclass.h"
#include <QDebug>
#include "MyLib_global.h"

class MYLIB_EXPORT PluginClass : public AbstractPluginClass {
    Q_OBJECT
public:
    explicit PluginClass(QObject *parent = nullptr);
    void callPluginFunc();

signals:

};

#endif // PLUGINCLASS_H
