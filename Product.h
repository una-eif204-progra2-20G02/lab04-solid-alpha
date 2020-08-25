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
    const virtual std::string &getName() const=0;
    virtual void setName(const std::string& name)=0;
    virtual double getPrice()const=0;
    virtual void setPrice(const double price)=0;
    virtual std::string toString()const =0;
protected:
    double _price;
    std::string _name;

};


#endif //LAB04_SOLID_PRODUCT_H
