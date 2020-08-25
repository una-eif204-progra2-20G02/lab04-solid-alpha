//
// Created by Pc on 24/8/2020.
//
#include "Physical.h"
Physical::Physical(string unnamed2, double unnamed3, double unnamed, string unnamed1, double itemWeight,
                   string productDimensions)
        : Movie(unnamed2, unnamed3), IEspecificationsDiscount(unnamed, unnamed1) {
    IEspecificationsDiscount::_itemWeight = itemWeight;
    IEspecificationsDiscount::_productDimensions = productDimensions;
}
Physical::Physical(string unnamed2, double unnamed3, double unnamed, string unnamed1,
                   IEspecificationsDiscount *especificationsDiscount, ICalculusTax *calculusTax, Movie *movie,
                   Game *game) : Movie(unnamed2, unnamed3), IEspecificationsDiscount(unnamed, unnamed1) {
    _iEspecifications = especificationsDiscount;
    _iCalculusTax = calculusTax;
    _movies = movie;
    _games = game;
}
Physical::~Physical(){}
string Physical::getProductDimensions(){
    return IEspecificationsDiscount::_productDimensions;
}
double Physical::getItemWeight(){
    return IEspecificationsDiscount::_itemWeight;
}
double Physical::getTax(){
    return ICalculusTax::_tax;
}
void Physical::setProductDimensions(string productDimensions)
{
    _productDimensions = productDimensions;
}
void Physical::setItemWeight(double itemWeight){
    _itemWeight = itemWeight;
}
void Physical::setTax(double tax){
    ICalculusTax::_tax = tax;
}
double Physical::calculatePriceWithTax(){
    double valor=0.0;
    if(Physical::getVariable()==true){
        valor=((_g->getPrice())*(~Physical::getTax()));
    }
    else if(Physical::getVariable()==false){
        valor=((_m->getPrice())*(Physical::getTax()));
    }
    return valor;

}


