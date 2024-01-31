#include "product.h"

Product::Product()
{

}

Product::Product(const string &SKU, const string &name, const string &description, float sellingPrice, float purchasePrice, int units) : SKU(SKU),
    name(name),
    description(description),
    sellingPrice(sellingPrice),
    purchasePrice(purchasePrice),
    units(units)
{}

const string &Product::getSKU() const
{
    return SKU;
}

void Product::setSKU(const string &newSKU)
{
    SKU = newSKU;
}

const string &Product::getName() const
{
    return name;
}

void Product::setName(const string &newName)
{
    name = newName;
}

const string &Product::getDescription() const
{
    return description;
}

void Product::setDescription(const string &newDescription)
{
    description = newDescription;
}

float Product::getSellingPrice() const
{
    return sellingPrice;
}

void Product::setSellingPrice(float newSellingPrice)
{
    sellingPrice = newSellingPrice;
}

float Product::getPurchasePrice() const
{
    return purchasePrice;
}

void Product::setPurchasePrice(float newPurchasePrice)
{
    purchasePrice = newPurchasePrice;
}

int Product::getUnits() const
{
    return units;
}

void Product::setUnits(int newUnits)
{
    units = newUnits;
}

void Product::showInformation()
{
        cout << "SKU: " << SKU << endl;
        cout << "Name: " << name << endl;
        cout << "Description: " << description << endl;
        cout << "Selling Price: " << sellingPrice << endl;
        cout << "Purchase Price: " << purchasePrice << endl;
        cout << "Units: " << units << endl;
}
