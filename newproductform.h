#ifndef NEWPRODUCTFORM_H
#define NEWPRODUCTFORM_H

#include <QWidget>
#include "inventory.h"

namespace Ui {
class NewProductForm;
}

class NewProductForm : public QWidget
{
    Q_OBJECT

public:
    explicit NewProductForm(QWidget *parent = nullptr);
    ~NewProductForm();

signals:
    void productAdded(Product *newProduct);

private slots:
    void on_pushButton_released();

private:
    Ui::NewProductForm *ui;
};

#endif // NEWPRODUCTFORM_H
