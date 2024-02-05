#include "addproductform.h"
#include "ui_addproductform.h"

AddProductForm::AddProductForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddProductForm)
{
    ui->setupUi(this);

    const QVector<Product*>& products = inventoryInstance.getProducts();

    // Agregar productos al QComboBox
    for (const Product* product : products) {
        ui->productsComboBox->addItem(product->name());
    }

    // Conectar señal y ranura
    connect(ui->pushButton, &QPushButton::released, this, &AddProductForm::on_pushButton_released);
}

AddProductForm::~AddProductForm()
{
    delete ui;
}

void AddProductForm::on_pushButton_released()
{

}

