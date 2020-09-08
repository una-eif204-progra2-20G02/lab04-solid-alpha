//
// Created by computer on 8/24/2020.
//

#include "Recive.h"//Calling Recive Class .h
// Constructors with parameters
Recive::Recive(std::string email){
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
 void Recive::addPhysical(Physical* physical){
    _iPrint->addPhysical(physical);
}
void  Recive::addDigital(Digital* digital){
    _iPrint->addDigital(digital);
}
void Recive::addStreaming (Streaming* streaming){

}
//Save in file void method
void Recive::save(const std::string &filename){
   _iPrint->save(filename);
}
std::string Recive::toString()const {
    std::ostringstream salida;
    salida << "Correo enviado  al correo a  " << getEmail() << "\n";
    salida<<_iPrint->toString();
    return salida.str();
}