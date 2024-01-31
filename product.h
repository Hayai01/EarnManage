#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
using namespace std;

class Product
{
public:
    Product();
    Product(const string &SKU, const string &name, const string &description, float sellingPrice, float purchasePrice, int units);

    const string &getSKU() const;
    void setSKU(const string &newSKU);

    const string &getName() const;
    void setName(const string &newName);

    const string &getDescription() const;
    void setDescription(const string &newDescription);

    float getSellingPrice() const;
    void setSellingPrice(float newSellingPrice);

    float getPurchasePrice() const;
    void setPurchasePrice(float newPurchasePrice);

    int getUnits() const;
    void setUnits(int newUnits);

    virtual void showInformation();
private:
    string SKU;
    string name;
    string description;
    float sellingPrice;
    float purchasePrice;
    int units;

};

#endif // PRODUCT_H
