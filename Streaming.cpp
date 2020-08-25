//
// Created by computer on 8/24/2020.
//

#include "Streaming.h"
Streaming::Streaming() : ICalculusTax() {}

Streaming::Streaming(double tax,Game* game, Movie* movie):ICalculusTax() {
    _game=game;
    _movie=movie;
    _tax = tax;
}
Streaming::~Streaming() {
    delete _game;
    delete _movie;
}
Game* Streaming::getGame()const{
    return _game;
}
void Streaming::setGame(Game* game){
    _game=game;
}
void Streaming::setMovie(Movie* movie){
    _movie=movie;
}
Movie* Streaming::getMovie()const{
    return _movie;
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
double Streaming::calculatePriceWithTaxMovie()const {
    double valor=0.0;
    valor=((getMovie()->getPrice())*(1+Streaming::getTax()));
    return valor;
}
std::string Streaming::toString()const{
    std::ostringstream s;

        s <<getGame()->toString();
        s<<Streaming::calculatePriceWithTaxGame()<<" colones"<<"\n";


        s<<getMovie()->toString();
        s<<Streaming::calculatePriceWithTaxMovie()<<" colones"<<"\n";

    return s.str();
}