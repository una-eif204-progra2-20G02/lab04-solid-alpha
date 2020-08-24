//
// Created by dell on 23/8/2020.
//

#include "Movie.h"
Movie::Movie(string name,double price){
    Producto::_name=name;
    Producto::_price=price;
}
Movie::~Movie(){

}
const string & Movie::getName() const {return Producto::_name;}
void Movie::setName(const string &name) {Producto::_name=name;}
double Movie::getPrice() {return Producto::_price;}
void Movie::setPrice(double price) {Producto::_price=price;}
string Movie::toString() const {
    ostringstream s;
    s<<"Nombre: "<< Producto::_name<<endl;
    s<<"Precio: "<<Producto::_price<<endl;
    return s.str();
}