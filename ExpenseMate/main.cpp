#include "expensemate.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ExpenseMate w;
    w.show();

    return a.exec();
}
