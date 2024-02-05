#ifndef EARNMANAGE_H
#define EARNMANAGE_H

#include <QMainWindow>
#include "inventory.h"
#include "addproductform.h"
#include "newproductform.h"

QT_BEGIN_NAMESPACE
namespace Ui { class EarnManage; }
QT_END_NAMESPACE

class EarnManage : public QMainWindow
{
    Q_OBJECT

public:
    EarnManage(QWidget *parent = nullptr);
    ~EarnManage();


private slots:
    void on_actionAdd_Product_triggered();

    void on_actionIngreso_triggered();

private:
    Ui::EarnManage *ui;
    Inventory m_inventory;
    void onProductAdded(Product *newProduct);
};
#endif // EARNMANAGE_H
