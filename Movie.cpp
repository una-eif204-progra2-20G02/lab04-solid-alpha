//
// Created by dell on 23/8/2020.
//

#include "Movie.h"

Movie::Movie():Producto() {

}
Movie::Movie(std::string name,double price):Producto(){
    Producto::_name=name;
    Producto::_price=price;
}
Movie::~Movie(){

}
const std::string & Movie::getName() const {return Producto::_name;}
void Movie::setName(const std::string &name) {Producto::_name=name;}
double Movie::getPrice() {return Producto::_price;}
void Movie::setPrice(double price) {Producto::_price=price;}
std::string Movie::toString() const {
    std::ostringstream s;
    s<<"==Movie==\n";
    s<<"Name  : "<< Movie::getName()<<std::endl;
    s<<"Price : "<<Movie::getPrice()<<std::endl;
    return s.str();
}

Movie::Movie() {}
