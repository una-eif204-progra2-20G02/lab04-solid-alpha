//
// Created by computer on 8/24/2020.
//

#include "Streaming.h"//Calling Streaming Class .h
// Constructors without parameters
Streaming::Streaming()  {}
// Constructors with parameters
Streaming::Streaming(double tax,Game* game) {
    _game=game;
    _tax = tax;
}
//Destructor
Streaming::~Streaming() {

}
// Gets methods
Game* Streaming::getGame()const{
    return _game;
}
double Streaming::getTax() const{
 return _tax;
}
// Sets methods
void Streaming::setGame(Game* game){
    _game=game;
}
 void Streaming::setTax(double tax){
     _tax=tax;
}
//Double calculate tax
 double Streaming::calculatePriceWithTaxGame()const {
       double valor=(getGame()->getPrice())*(1+Streaming::getTax());
    return valor;
}
//String Method returning string
std::string Streaming::toString()const{
    std::ostringstream salida;
        salida <<getGame()->toString();
        salida<<"Price with Tax: "<<Streaming::calculatePriceWithTaxGame()<<" colones"<<"\n";
    return salida.str();
}