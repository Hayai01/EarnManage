#include "earnmanage.h"
#include "inventory.h"
#include <iostream>
using namespace std;

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EarnManage w;
    w.show();
    return a.exec();


}
