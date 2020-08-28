//
// Created by Pc on 24/8/2020.
//

#ifndef LAB04_SOLID_IESPECIFICATIONSDISCOUNTCLASS_H
#define LAB04_SOLID_IESPECIFICATIONSDISCOUNTCLASS_H
//Includes libraries
#include <iostream>
//Interface class IEspecificationsDiscount declaration
class IEspecificationsDiscount
{
public:
    //Public methods declaration
    IEspecificationsDiscount();
    ~IEspecificationsDiscount();
    virtual std::string toString()const=0;//Pure virtual methods declaration
};
#endif //LAB04_SOLID_IESPECIFICATIONSDISCOUNTCLASS_H
