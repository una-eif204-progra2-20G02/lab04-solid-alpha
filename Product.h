//
// Created by dell on 23/8/2020.
//

#ifndef LAB04_SOLID_PRODUCT_H
#define LAB04_SOLID_PRODUCT_H
//Includes libraries
#include<iostream>
#include <sstream>

class Product{ //Class product declaration

public:
    //Public methods declaration
    Product(){;}
    ~Product(){;}
    virtual std::string toString()const =0; //Pure virtual method declaration



};


#endif //LAB04_SOLID_PRODUCT_H
