#include "product.h"

Product::Product()
{

}


Product::Product(const QString &SKU, const QString &name, const QString &description, float sellingPrice, float purchasePrice, int units) : m_SKU(SKU),
    m_name(name),
    m_description(description),
    m_sellingPrice(sellingPrice),
    m_purchasePrice(purchasePrice),
    m_units(units)
{}



const QString &Product::SKU() const
{
    return m_SKU;
}

void Product::setSKU(const QString &newSKU)
{
    m_SKU = newSKU;
}

const QString &Product::name() const
{
    return m_name;
}

void Product::setName(const QString &newName)
{
    m_name = newName;
}

const QString &Product::description() const
{
    return m_description;
}

void Product::setDescription(const QString &newDescription)
{
    m_description = newDescription;
}

float Product::sellingPrice() const
{
    return m_sellingPrice;
}

void Product::setSellingPrice(float newSellingPrice)
{
    m_sellingPrice = newSellingPrice;
}

float Product::purchasePrice() const
{
    return m_purchasePrice;
}

void Product::setPurchasePrice(float newPurchasePrice)
{
    m_purchasePrice = newPurchasePrice;
}

int Product::units() const
{
    return m_units;
}

void Product::setUnits(int newUnits)
{
    m_units = newUnits;
}

QString Product::showInformation() const
{
    QString result;
    result += "SKU: " + m_SKU + "\n";
    result += "Name: " + m_name + "\n";
    result += "Description: " + m_description + "\n";
    result += "Selling Price: " + QString::number(m_sellingPrice) + "\n";
    result += "Purchase Price: " + QString::number(m_purchasePrice) + "\n";
    result += "Units: " + QString::number(m_units);

    return result;
}


