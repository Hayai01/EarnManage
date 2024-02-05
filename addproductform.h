#ifndef ADDPRODUCTFORM_H
#define ADDPRODUCTFORM_H

#include <QWidget>
#include "inventory.h"

namespace Ui {
class AddProductForm;
}

class AddProductForm : public QWidget
{
    Q_OBJECT

public:
    explicit AddProductForm(QWidget *parent = nullptr);
    ~AddProductForm();

private slots:

    void on_pushButton_released();

private:
    Ui::AddProductForm *ui;
    Inventory inventoryInstance;
};

#endif // ADDPRODUCTFORM_H
