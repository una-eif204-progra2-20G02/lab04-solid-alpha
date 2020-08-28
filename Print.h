//
// Created by computer on 8/28/2020.
//

#ifndef LAB4_SOLID_PRINT_H//Conditional of defining Class
#define LAB4_SOLID_PRINT_H//Defining Class
#include <vector>//Calling Library vector
#include <sstream>//Calling Library sstream
#include <string>//Calling Library string
#include <iostream>//Calling Library iostream
#include "Streaming.h"//Calling Streaming Class .
#include "Digital.h"//Calling Digital Class .h
#include "Physical.h"//Calling Physical Class .h
#include "IPrint.h"//Calling IPrint Class .h
class Physical;//Composition Class Physical
class Digital;//Composition Class Digital
class Streaming;//Composition Class Streaming;
class Print:public IPrint {
public://Data public
    //Constructors without parameters
    Print();
    //Destructor
    ~Print();
    // add void methods
    virtual void addPhysical(Physical* ) override;//Pure Virtual
    virtual void  addDigital(Digital* )override;//Pure Virtual
    virtual void addStreaming (Streaming* )override;//Pure Virtual
    //String method
    virtual std::string toString()const override;//Pure Virtual
private://Data private
    std::vector<Digital> _listDigital;//Attribute listDigital
    std::vector<Streaming> _listStreaming;//Attribute listStreaming
    std::vector<Physical> _listPhysical;//Attribute listPhysical

};


#endif //LAB4_SOLID_PRINT_H//End if defining
