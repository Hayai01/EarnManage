#include "newproductform.h"
#include "ui_newproductform.h"

NewProductForm::NewProductForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewProductForm)
{
    ui->setupUi(this);
}

NewProductForm::~NewProductForm()
{
    delete ui;
}
