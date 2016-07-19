#ifndef OCVWIDGET_H
#define OCVWIDGET_H

#include <QWidget>

namespace Ui {
class ocvwidget;
}

class ocvwidget : public QWidget
{
    Q_OBJECT

public:
    explicit ocvwidget(QWidget *parent = 0);
    ~ocvwidget();

private:
    Ui::ocvwidget *ui;
};

#endif // OCVWIDGET_H
