//
// Created by Pc on 24/8/2020.
//
#include "Digital.h"
Digital::Digital():ICalculusDiscount(),ICalculusTax(){}
Digital::Digital(double tax, double discount,Game* game, Movie* movie):ICalculusDiscount(),ICalculusTax(){
_game=game;
_movie=movie;
_tax=tax;
_discount=discount;
}
Digital::~Digital(){
    delete _game;
    delete _movie;
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
 Movie* Digital::getMovie()const{
    return _movie;
}
 void Digital::setMovie(Movie* movie){
    _movie=movie;
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
double Digital::calculatePriceWithTaxMovie()const {
    double y=0.0;
    y= Digital::calculateDiscountMovie()*(1+Digital::getTax());
    return y;
}


double Digital::calculateDiscountMovie()const{
    double x=0.0;
        x= getMovie()->getPrice()*(1-Digital::getDiscount());
    return x;
}

std::string Digital::toString()const{
    std::ostringstream s;


            s << getGame()->toString() ;
            s << "Price with discout: " << Digital::calculateDiscountGame() <<" colones"<<"\n";
            s << "Price with tax: " << Digital::calculatePriceWithTaxGame() <<" colones"<<"\n";
            s << getMovie()->toString();
            s << "Price with discout: " << Digital::calculateDiscountMovie() <<" colones"<<"\n";
            s << "Price with tax: " << Digital::calculatePriceWithTaxMovie() <<" colones"<<"\n";


    return s.str();
}
