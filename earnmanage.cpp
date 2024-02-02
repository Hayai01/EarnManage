#include "earnmanage.h"
#include "ui_earnmanage.h"
#include "newproductform.h"

EarnManage::EarnManage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EarnManage)
{
    ui->setupUi(this);
}

EarnManage::~EarnManage()
{
    delete ui;
}


void EarnManage::on_actionAdd_Product_triggered()
{

    NewProductForm *p1 = new NewProductForm();
    p1->setWindowModality(Qt::ApplicationModal);
    p1->setWindowTitle("Añadir Producto");
    p1->show();
}

