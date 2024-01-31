#include "inventory.h"

Inventory::Inventory()
{

}

void Inventory::addProduct(Product *newProduct)
{
    listProducts.push_back(newProduct);
}
