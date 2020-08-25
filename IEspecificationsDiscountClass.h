//
// Created by Pc on 24/8/2020.
//

#ifndef LAB04_SOLID_IESPECIFICATIONSDISCOUNTCLASS_H
#define LAB04_SOLID_IESPECIFICATIONSDISCOUNTCLASS_H
#include <iostream>
class IEspecificationsDiscount
{
public:
    IEspecificationsDiscount();
    ~IEspecificationsDiscount();
    virtual std::string toString()const=0;

};
#endif //LAB04_SOLID_IESPECIFICATIONSDISCOUNTCLASS_H
