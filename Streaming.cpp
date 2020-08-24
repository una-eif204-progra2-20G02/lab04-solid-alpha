//
// Created by computer on 8/24/2020.
//

#include "Streaming.h"

Streaming::Streaming(Game* g, Movie * m):_m(m),_g(g){}
Streaming::~Streaming() {}
double Streaming::getTax() const{
 return ICalculusTax::_tax;
}
 void Streaming::setTax(double tax){
     ICalculusTax::_tax=tax;
}
bool Streaming::getVariable()const{
    return _variable;
}
 void Streaming::setVariable(bool variable){
    _variable=variable;
}
 double Streaming::calculatePriceWithTax()const {
    double valor=0.0;
    if(Streaming::getVariable()==true){
        valor=((_g->getPrice())*(Streaming::getTax()));
    }
    else if(Streaming::getVariable()==false){
         valor=((_m->getPrice())*(Streaming::getTax()));
    }
    return valor;

}
std::string Streaming::toString()const{
    std::ostringstream s;
    if(Streaming::getVariable()==true) {
        s <<_g->toString();
        s<<Streaming::calculatePriceWithTax()<<std::endl;
    }
    else if(Streaming::getVariable()==false){
        s<<_m->toString();
        s<<Streaming::calculatePriceWithTax()<<std::endl;
    }
    return s.str();
}