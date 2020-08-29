//
// Created by computer on 8/28/2020.
//

#include <fstream>
#include "Print.h"//Calling Print Class .h
// Constructors without parameters
Print::Print():IPrint(){

}
//Destructor
Print::~Print(){

}
// add void methods
void Print::addPhysical(Physical* physical){
    _listPhysical.push_back(*physical);
}
void Print::addDigital(Digital* digital){
    _listDigital.push_back(*digital);
}
void Print::addStreaming(Streaming * streaming){
    _listStreaming.push_back(*streaming);
}
//Save into a file
void Print::save(const std::string &filename) {
    std::ofstream salida;
    salida.open(filename,std::ios::app);
    salida<<Print::toString();
    salida.close();
}
//String Method returning string
std::string Print::toString()const{
    std::ostringstream salida;
    {
        for (int i = 0;i<_listStreaming.size(); i++) {
            salida <<_listStreaming.data()[i].toString() << "\n";
        }
        for (int j = 0;j<_listDigital.size(); j++) {
            salida << _listDigital.data()[j].toString() << "\n";
        }
        for (int k = 0;k< _listPhysical.size(); k++) {
            salida << _listPhysical.data()[k].toString() << "\n";
        }
    }
    return salida.str();
}