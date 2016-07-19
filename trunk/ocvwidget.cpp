#include "ocvwidget.h"
#include "ui_ocvwidget.h"

ocvwidget::ocvwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ocvwidget)
{
    ui->setupUi(this);
}

ocvwidget::~ocvwidget()
{
    delete ui;
}
