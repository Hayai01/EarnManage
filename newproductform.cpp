#include "newproductform.h"
#include "ui_newproductform.h"

NewProductForm::NewProductForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewProductForm)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint & ~Qt::WindowMinimizeButtonHint);
}

NewProductForm::~NewProductForm()
{
    delete ui;
}




void NewProductForm::on_pushButton_released()
{
    QString SKU = ui->skuLineEdit->text();
    QString name = ui->nameLineEdit->text();
    QString description = ui->descriptionTextEdit->toPlainText();
    float sellingPrice = ui->sellingPriceLineEdit->text().toFloat();
    float purchasePrice = ui->purchaseLineEdit->text().toFloat();
    int units = ui->unitsLineEdit->text().toInt();

    Product *p = new Product(SKU, name, description, sellingPrice, purchasePrice, units);

    // Emite la señal para indicar que se añadió un producto
    emit productAdded(p);

    this->close();
}


