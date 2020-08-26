//
// Created by dell on 23/8/2020.
//

#ifndef LAB04_SOLID_PRODUCT_H
#define LAB04_SOLID_PRODUCT_H

#include<iostream>
#include <sstream>

class Product{

public:
    Product(){;}
    ~Product(){;}
    virtual std::string toString()const =0;



};


#endif //LAB04_SOLID_PRODUCT_H
