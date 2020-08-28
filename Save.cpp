//
// Created by computer on 8/28/2020.
//

#include "Save.h"//Calling Save Class .h

//Constructors without parameters
Save::Save():ISave(){

}
//Destructor
Save::~Save(){

}
// add void methods
void Save::addPhysical(Physical* physical){
    _iPrint->addPhysical(physical);
}
void Save::addDigital(Digital* digital){
    _iPrint->addDigital(digital);
}
void Save::addStreaming(Streaming * streaming){
    _iPrint->addStreaming(streaming);
}

//Save in file void method
void Save::save(const std::string &filename){
    std::ofstream out (filename, std::ios_base::trunc);
    out<<_iPrint->toString();
    out.close();

}
