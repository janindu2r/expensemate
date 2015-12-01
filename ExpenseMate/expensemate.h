#ifndef EXPENSEMATE_H
#define EXPENSEMATE_H

#include <QMainWindow>

namespace Ui {
class ExpenseMate;
}

class ExpenseMate : public QMainWindow
{
    Q_OBJECT

public:
    explicit ExpenseMate(QWidget *parent = 0);
    ~ExpenseMate();

private:
    Ui::ExpenseMate *ui;
};

#endif // EXPENSEMATE_H
