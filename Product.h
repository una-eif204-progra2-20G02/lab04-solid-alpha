//
// Created by dell on 23/8/2020.
//

#ifndef LAB04_SOLID_PRODUCT_H//Conditional of defining Class
#define LAB04_SOLID_PRODUCT_H//Defining Class

#include<iostream>//Calling Library iostream
#include <sstream>//Calling Library sstream

class Product{//Declaration Class
//Methods
public://public data
    //Constructor without parameters
    Product(){;}
    //Destructor
    ~Product(){;}
    //String method
    virtual std::string toString()const =0;//Pure virtual

};
#endif //LAB04_SOLID_PRODUCT_H//End if defining
