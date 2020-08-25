//
// Created by Pc on 24/8/2020.
//
#include "Digital.h"
Digital::Digital(ICalculusTax*, ICalculusDiscount*,Movie*,Game*)
{

}
Digital::~Digital(){}
double Digital::getDiscount(){
    return ICalculusDiscount::_discount;
}
double Digital::getTax(){
    return ICalculusTax::_tax;
}
void Digital::setDiscount(double discount){
    ICalculusDiscount::_discount = discount;
}
void Digital::setTax(double tax){
    ICalculusTax::_tax = tax;
}
double Digital::calculatePriceWithTax(){
    if(Digital::getVariable()==true) {
        return Digital::calculateDiscount()*Digital::getTax();
    }
    else if(Digital::getVariable()==false){
        return Digital::calculateDiscount()*Digital::getTax();
    }
}

bool Physical::getVariable() const {
    return _variable;
}
void Physical::setVariable(bool variable) {
    _varibale=variable;
}
double Digital::calculateDiscount(){
    double x=0.0;
    if(Digital::getVariable()==true) {
     x=_game->getPrice()*Digital::getDiscount();
    }
    else if(Digital::getVariable()==false){
      x= _movie->getPrice()*Digital::getDiscount();
    }
    return x;
}
string Digital::toString(){
    stringstream s;
    if(Digital::getVariable()==true) {
        s<<"Tipe Game: "<<"\n";
        s <<_game->toString()<<"\n";
        s<<"Price with discout: "<<Digital::calculateDiscount()<<"\n";
        s<<"Price with tax: "<<Digital::calculatePriceWithTax()<<"\n";
    }
    else if(Digital::getVariable()==false){
        s<<"Tipe Movie: "<<"\n";
        s<<_movie->toString()<<"\n";
        s<<"Price with discout: "<<Digital::calculateDiscount()<<"\n";
        s<<"Price with tax: "<<Digital::calculatePriceWithTax()<<"\n";
    }
    return s.str();
}
