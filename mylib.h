#ifndef MYLIB_H
#define MYLIB_H
#include <QWidget>
#include <QDebug>
#include "MyLib_global.h"

class MYLIB_EXPORT MyLib : public QObject {
    Q_OBJECT

public:
    MyLib();
    void callLib();

signals:
    void mySignal(const QString &message);
};

#endif // MYLIB_H
