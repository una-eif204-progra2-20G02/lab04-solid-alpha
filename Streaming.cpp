//
// Created by computer on 8/24/2020.
//

#include "Streaming.h"
//Constructors implementations
Streaming::Streaming()  {}

Streaming::Streaming(double tax,Game* game) {
    _game=game;
    _tax = tax;
}
//Destructor implementation
Streaming::~Streaming() {

}
//Sets and gets implementations
Game* Streaming::getGame()const{
    return _game;
}
void Streaming::setGame(Game* game){
    _game=game;
}

double Streaming::getTax() const{
 return _tax;
}
 void Streaming::setTax(double tax){
     _tax=tax;
}
//Calculate method implementation
 double Streaming::calculatePriceWithTaxGame()const {
    double valor=0.0;
        valor=((getGame()->getPrice())*(1+Streaming::getTax()));
    return valor;

}
//toString implementation
std::string Streaming::toString()const{
    std::ostringstream s;
        s <<getGame()->toString();
        s<<"Price with Tax: "<<Streaming::calculatePriceWithTaxGame()<<" colones"<<"\n";
    return s.str();
}