//
// Created by Pc on 24/8/2020.
//
#include "Digital.h"
Digital::Digital(){}
Digital::Digital(double tax, double discount,Game* game){
_game=game;
_tax=tax;
_discount=discount;
}
Digital::~Digital(){

}
double Digital::getDiscount()const{
    return _discount;
}
double Digital::getTax()const {
    return _tax;
}
void Digital::setDiscount(double discount){
    _discount = discount;
}
void Digital::setTax(double tax){
   _tax = tax;
}
Game* Digital::getGame()const{
    return _game;
}
void Digital::setGame(Game* game){
    _game=game;
}

double Digital::calculatePriceWithTaxGame() const {
    double y=0.0;
        y= Digital::calculateDiscountGame()*(1+Digital::getTax());
    return y;
}


double Digital::calculateDiscountGame()const{
    double x=0.0;
     x=getGame()->getPrice()*(1-Digital::getDiscount());
    return x;
}



std::string Digital::toString()const{
    std::ostringstream s;
            s << getGame()->toString() ;
            s << "Price with discout: " << Digital::calculateDiscountGame() <<" colones"<<"\n";
            s << "Price with tax: " << Digital::calculatePriceWithTaxGame() <<" colones"<<"\n";
    return s.str();
}
