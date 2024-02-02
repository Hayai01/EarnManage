#ifndef EARNMANAGE_H
#define EARNMANAGE_H

#include <QMainWindow>
#include "product.h"

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

private:
    Ui::EarnManage *ui;
    QList<Product*> m_products;
};
#endif // EARNMANAGE_H
