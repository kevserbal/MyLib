#include "mylib.h"

MyLib::MyLib() {
}

void MyLib::callLib() {
    qDebug() << "Called my lib";
    emit this->mySignal("my signal message");
 }
