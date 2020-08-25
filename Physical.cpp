//
// Created by Pc on 24/8/2020.
//
#include "Physical.h"
Physical::Physical():ICalculusTax(),IEspecificationsDiscount() {}
Physical::Physical(double tax, double itemWeight, std::string productDimensions, Game* game, Movie* movie):ICalculusTax(),IEspecificationsDiscount() {
    _game=game;
    _movie=movie;
    _tax=tax;
    _itemWeight=itemWeight;
 _productDimensions=productDimensions;
}
Physical::~Physical(){
delete _game;
delete _movie;
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
double Physical::calculatePriceWithTaxGame()const{
    double valor=0.0;
        valor=((_game->getPrice())*(1+Physical::getTax()));
    return valor;
}
double Physical::calculatePriceWithTaxMovie()const{
    double valor=0.0;
    valor=((_movie->getPrice())*(1+Physical::getTax()));
    return valor;
}
std::string Physical::toString()const{
    std::ostringstream s;

        s <<_game->toString()<<"\n";
        s<<"Weight of Game: "<<getItemWeight()<<"\n";
        s<<"Dimension of Game: "<<getProductDimensions()<<" lb""\n";
        s<<"Price with tax: "<<Physical::calculatePriceWithTaxGame()<<" colones"<<"\n";
        s<<_movie->toString()<<"\n";
        s<<"Weight of Movie: "<<getItemWeight()<<"\n";
        s<<"Dimension of Movie: "<<getProductDimensions()<<"\n";
        s<<"Price with tax: "<<Physical::calculatePriceWithTaxMovie()<<" colones"<<"\n";

    return s.str();
}


