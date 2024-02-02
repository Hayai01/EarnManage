#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>
#include <iostream>
using namespace std;

class Product
{
public:
    Product();
    Product(const QString &SKU, const QString &name, const QString &description, float sellingPrice, float purchasePrice, int units);


    virtual QString showInformation();
    const QString &SKU() const;
    void setSKU(const QString &newSKU);
    const QString &name() const;
    void setName(const QString &newName);
    const QString &description() const;
    void setDescription(const QString &newDescription);
    float sellingPrice() const;
    void setSellingPrice(float newSellingPrice);
    float purchasePrice() const;
    void setPurchasePrice(float newPurchasePrice);
    int units() const;
    void setUnits(int newUnits);

private:
    QString m_SKU;
    QString m_name;
    QString m_description;
    float m_sellingPrice;
    float m_purchasePrice;
    int m_units;

};

#endif // PRODUCT_H
