//
// Created by dell on 23/8/2020.
//

#ifndef LAB04_SOLID_PRODUCTO_H
#define LAB04_SOLID_PRODUCTO_H

#include<iostream>
using namespace std;

class Producto{
protected:
    double _price;
    string &_name;
public:
    const virtual string &getName() const=0;
    virtual void setName(const string& name)=0;
    virtual double getPricen()=0;
    virtual void setPrice(double price)=0;
    virtual string toString()const =0;

};


#endif //LAB04_SOLID_PRODUCTO_H
