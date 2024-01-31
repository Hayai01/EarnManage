#ifndef INVENTORY_H
#define INVENTORY_H

#include "product.h"
#include "vector"

class Inventory
{
private:
    vector<Product*> listProducts;
public:
    Inventory();
    void addProduct(Product* newProduct);
};

#endif // INVENTORY_H
