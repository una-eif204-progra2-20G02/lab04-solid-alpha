//
// Created by computer on 8/24/2020.
//

#include "Recive.h"//Calling Recive Class .h
// Constructors with parameters
Recive::Recive(std::string email) {
    _email=email;
}
// Constructors with parameters
Recive::Recive(std::string email, Digital *const digital, Streaming *const streaming, Physical *const physical){
    _email=email;
    _digital=digital;
    _streaming=streaming;
    _physical=physical;
}
//Destructor
Recive::~Recive() {

}
// Gets methods
 std::string Recive::getEmail()const{
 return _email;
}
Digital* Recive::getDigital()const{
    return _digital;
}
Physical* Recive::getPhysical()const{
    return _physical;
}
void Recive::setPhysical(Physical * physical){
    _physical=physical;
}
Streaming* Recive::getStreaming()const{
    return _streaming;
}
// Sets methods
 void Recive::setEmail(std::string email) {
    _email=email;
}
  void Recive::setDigital(Digital* digital){
_digital=digital;
}
void Recive::setStreaming(Streaming* streaming){
    _streaming=streaming;
}
// add void methods
void Recive::addPhysical(Physical* physical){
_listPhysical.push_back(*physical);
}
void Recive::addDigital(Digital* digital){
_listDigital.push_back(*digital);
}
void Recive::addStreaming(Streaming * streaming){
_listStreaming.push_back(*streaming);
}
//Save in file void method
void Recive::save(const std::string &filename){
    std::ofstream out (filename, std::ios_base::trunc);
    out<<Recive::toString();
    out.close();

}
//String Method returning string
std::string Recive::toString()const{
    std::ostringstream s;
    s<<"Correo enviado  al correo a  "<<getEmail()<<"\n";
    {
        for (int i = 0;i<_listStreaming.size(); i++) {
            s <<_listStreaming.data()[i].toString() << "\n";
        }
        for (int j = 0;j<_listDigital.size(); j++) {
            s << _listDigital.data()[j].toString() << "\n";
        }
        for (int k = 0;k< _listPhysical.size(); k++) {
            s << _listPhysical.data()[k].toString() << "\n";
        }
    }
return s.str();
}