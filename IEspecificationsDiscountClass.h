//
// Created by Pc on 24/8/2020.
//

#ifndef LAB04_SOLID_IESPECIFICATIONSDISCOUNTCLASS_H
#define LAB04_SOLID_IESPECIFICATIONSDISCOUNTCLASS_H
#include <iostream>
using namespace std;
class IEspecificationsDiscount
{
protected:
    double _itemWeight;
    string _productDimensions;
public:
    IEspecificationsDiscount(double, string);
    ~IEspecificationsDiscount();
};
#endif //LAB04_SOLID_IESPECIFICATIONSDISCOUNTCLASS_H
