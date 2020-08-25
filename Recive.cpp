//
// Created by computer on 8/24/2020.
//

#include "Recive.h"
Recive::Recive(std::string email) {
    _email=email;
}

Recive::~Recive() {
    delete _streaming;
    delete _digital;
    delete _physical;
}
 std::string Recive::getEmail()const{
 return _email;
}
 void Recive::setEmail(std::string email) {
    _email=email;
}

Physical* Recive::getPhysical()const{
return _physical;
}
void Recive::setPhysical(Physical * physical){
 _physical=physical;
}
Digital* Recive::getDigital()const{
return _digital;
}
  void Recive::setDigital(Digital* digital){
_digital=digital;
}
Streaming* Recive::getStreaming()const{
   return _streaming;
}
void Recive::setStreaming(Streaming* streaming){
    _streaming=streaming;
}

[[maybe_unused]] void Recive::addPhysical(Physical *physical){
_listPhysical.push_back(*physical);
}
void Recive::addDigital(Digital* digital){
_listDigital.push_back(*digital);
}

[[maybe_unused]]void Recive::addStreaming(Streaming * streaming){
_listStreaming.push_back(*streaming);
}
void Recive::save(const std::string &filename){
    std::ofstream out (filename, std::ios_base::trunc);
    out<<Recive::toString();
    out.close();

}
std::string Recive::toString()const{
    std::ostringstream s;
    s<<"Correo enviado  al correo"<<getEmail()<<"\n";
    {
        for (int i = 0; i < _listStreaming.size(); i++) {
            s << _listStreaming.data()[i].toString() << "\n";
        }
        for (int j = 0; j < _listDigital.size(); j++) {
            s << _listDigital.data()[j].toString() << "\n";
        }
        for (int k = 0; k < _listPhysical.size(); k++) {
            s << _listPhysical.data()[k].toString() << "\n";
        }
    }
return s.str();
}