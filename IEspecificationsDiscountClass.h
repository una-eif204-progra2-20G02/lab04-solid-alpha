//
// Created by Pc on 24/8/2020.
//

#ifndef LAB04_SOLID_IESPECIFICATIONSDISCOUNTCLASS_H//Conditional of defining Class
#define LAB04_SOLID_IESPECIFICATIONSDISCOUNTCLASS_H//Defining Class
#include <iostream>//Calling Library iostream
class IEspecificationsDiscount//Declaration Class
{
    //Methods
public://public data
    //Constructor without parameters
    IEspecificationsDiscount();
    //Destructor
    ~IEspecificationsDiscount();
    //String method
    virtual std::string toString()const=0;//Pure virtual

};
#endif //LAB04_SOLID_IESPECIFICATIONSDISCOUNTCLASS_H//End if defining
