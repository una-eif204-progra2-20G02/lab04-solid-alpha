//
// Created by computer on 8/24/2020.
//

#include "Streaming.h"
Streaming::Streaming(Movie *movie) : ICalculusTax(), _movie(movie) {}

Streaming::Streaming(double tax,Game* game, Movie* movie):ICalculusTax() {
    _game=game;
    _movie=movie;
    _tax = tax;
}
Streaming::~Streaming() {
    delete _game;
    delete _movie;
}
double Streaming::getTax() const{
 return _tax;
}
 void Streaming::setTax(double tax){
     _tax=tax;
}

 double Streaming::calculatePriceWithTaxGame()const {
    double valor=0.0;
        valor=((_game->getPrice())*(1+Streaming::getTax()));
    return valor;

}
double Streaming::calculatePriceWithTaxMovie()const {
    double valor=0.0;
    valor=((_movie->getPrice())*(1+Streaming::getTax()));
    return valor;
}
std::string Streaming::toString()const{
    std::ostringstream s;

        s <<_game->toString();
        s<<Streaming::calculatePriceWithTaxGame()<<" colones"<<"\n";


        s<<_movie->toString();
        s<<Streaming::calculatePriceWithTaxMovie()<<" colones"<<"\n";

    return s.str();
}