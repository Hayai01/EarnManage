#include "inventory.h"

#include <QDebug>


Inventory::Inventory()
{

}

void Inventory::addProduct(Product *newProduct)
{
    listProducts.push_back(newProduct);
}

void Inventory::printProducts() const
{
    for (const Product* product : listProducts)
    {
        qDebug() << "Product:" << product->showInformation();
    }
}

const QVector<Product*>& Inventory::getProducts() const
{
    return listProducts;
}
