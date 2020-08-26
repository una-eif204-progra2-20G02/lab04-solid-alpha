//
// Created by computer on 8/24/2020.
//

#include "Streaming.h"
Streaming::Streaming()  {}

Streaming::Streaming(double tax,Game* game) {
    _game=game;
    _tax = tax;
}
Streaming::~Streaming() {

}
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

 double Streaming::calculatePriceWithTaxGame()const {
    double valor=0.0;
        valor=((getGame()->getPrice())*(1+Streaming::getTax()));
    return valor;

}

std::string Streaming::toString()const{
    std::ostringstream s;
        s <<getGame()->toString();
        s<<Streaming::calculatePriceWithTaxGame()<<" colones"<<"\n";
    return s.str();
}