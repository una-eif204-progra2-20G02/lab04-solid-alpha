//
// Created by Pc on 24/8/2020.
//
#include "Physical.h"//Calling Physical Class .h
// Constructors without parameters
Physical::Physical() {}
// Constructors with parameters
Physical::Physical(double tax, double itemWeight, std::string productDimensions, Game* game) {
    _game=game;
    _tax=tax;
    _itemWeight=itemWeight;
 _productDimensions=productDimensions;
}
//Destructor
Physical::~Physical(){

}
// Gets methods
Game* Physical::getGame()const{
    return _game;
}
std::string Physical::getProductDimensions()const{
    return _productDimensions;
}
double Physical::getItemWeight()const{
    return _itemWeight;
}
double Physical::getTax()const{
    return _tax;
}
// Sets methods
void Physical::setGame(Game* game){
    _game=game;
}
void Physical::setProductDimensions(std::string productDimensions)
{
    _productDimensions = productDimensions;
}
void Physical::setItemWeight(double itemWeight){
    _itemWeight = itemWeight;
}

void Physical::setTax(double tax){
    _tax = tax;
}
//Double calculate tax
double Physical::calculatePriceWithTaxGame()const{
    double valor=0.0;
        valor=((getGame()->getPrice())*(1+Physical::getTax()));
    return valor;
}
//String Method returning string
std::string Physical::toString()const{
    std::ostringstream s;

        s <<getGame()->toString();
        s<<"Weight of Game: "<<getItemWeight()<<" lb"<<"\n";
        s<<"Dimension of Game: "<<getProductDimensions()<<"\n";
        s<<"Price with tax: "<<Physical::calculatePriceWithTaxGame()<<" colones"<<"\n";
    return s.str();
}


