#include "expensemate.h"
#include "ui_expensemate.h"

ExpenseMate::ExpenseMate(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ExpenseMate)
{
    ui->setupUi(this);
}

ExpenseMate::~ExpenseMate()
{
    delete ui;
}
