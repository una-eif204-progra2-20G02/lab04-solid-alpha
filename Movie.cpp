//
// Created by dell on 23/8/2020.
//

#include "Movie.h"

Movie::Movie():Product() {

}
Movie::Movie(std::string name,double price):Product(){
    Producto::_name=name;
    Producto::_price=price;
}
Movie::~Movie(){

}
const std::string & Movie::getName() const {return Product::_name;}
void Movie::setName(const std::string &name) {Product::_name=name;}
double Movie::getPrice() const {return Product::_price;}
void Movie::setPrice(double price) {Product::_price=price;}
std::string Movie::toString() const {
    std::ostringstream s;
    s<<"==Movie==\n";
    s<<"Name  : "<< Movie::getName()<<std::endl;
    s<<"Price : "<<Movie::getPrice()<<std::endl;
    return s.str();
}