#include "earnmanage.h"
#include "ui_earnmanage.h"


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

    // Conectar el formulario al inventario
    connect(p1, &NewProductForm::productAdded, this, &EarnManage::onProductAdded);
}

void EarnManage::onProductAdded(Product *newProduct)
{
    m_inventory.addProduct(newProduct);
    m_inventory.printProducts();
}

void EarnManage::on_actionIngreso_triggered()
{
    AddProductForm *p1 = new AddProductForm();
    p1->setWindowModality(Qt::ApplicationModal);
    p1->setWindowTitle("Añadir Producto");
    p1->show();

}

