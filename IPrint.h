//
// Created by computer on 8/28/2020.
//

#ifndef LAB4_SOLID_IPRINT_H//Conditional of defining Class
#define LAB4_SOLID_IPRINT_H//Defining Class
#include <vector>//Calling Library vector
#include <sstream>//Calling Library sstream
#include <string>//Calling Library string
#include <iostream>//Calling Library iostream
#include "Streaming.h"//Calling Streaming Class .
#include "Digital.h"//Calling Digital Class .h
#include "Physical.h"//Calling Physical Class .h
class IPrint {//Declaration Class
public://Data public
    //Constructors without parameters
    IPrint();
    //Destructor
    ~IPrint();
    // add void methods
    virtual void addPhysical(Physical* )=0;//Pure Virtual
    virtual void  addDigital(Digital* )=0;//Pure Virtual
    virtual void addStreaming (Streaming* )=0;//Pure Virtual
    //String method
    virtual std::string toString()const=0;//Pure Virtual
};


#endif //LAB4_SOLID_IPRINT_H//End if defining
