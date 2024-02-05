#ifndef INVENTORY_H
#define INVENTORY_H

#include "product.h"
#include "QVector"

class Inventory
{
private:
    QVector<Product*> listProducts;
public:
    Inventory();
    void addProduct(Product* newProduct);
    void deleteProduct(string SKU);
    void printProducts() const;
    const QVector<Product*>& getProducts() const;
};

#endif // INVENTORY_H
