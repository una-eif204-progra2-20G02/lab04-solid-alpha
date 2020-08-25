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
    ICalculusTax::tax = tax;
}
double Digital::calculatePriceWithTax(){
    return ICalculateTax::calculatePriceWithTax;
}
double Digital::calculateDiscount(){
   double x = calculatePriceWithTax()*0.015;
    return calculatePriceWithTax()-x;
}
string Digital::toString(){
    stringstream s;
    if(Digital::getVariable()==true) {
        s <<_g->toString();
        s<<Digital::calculatePriceWithTax()<<std::endl;
    }
    else if(Digital::getVariable()==false){
        s<<_m->toString();
        s<<Digital::calculatePriceWithTax()<<std::endl;
    }
    return s.str();
}
