//
// Created by computer on 8/28/2020.
//

#ifndef LAB4_SOLID_SAVE_H//Conditional of defining Class
#define LAB4_SOLID_SAVE_H//Defining Class
#include <vector>//Calling Library vector
#include <sstream>//Calling Library sstream
#include <string>//Calling Library string
#include <iostream>//Calling Library iostream
#include <fstream>//Calling Library fstream
#include "Streaming.h"//Calling Streaming Class .
#include "Digital.h"//Calling Digital Class .h
#include "Physical.h"//Calling Physical Class .h
#include "ISave.h"//Calling Isave Class .h
#include "Print.h"//Calling Print Class .h
class Physical;//Composition Class Physical
class Digital;//Composition Class Digital
class Streaming;//Composition Class Streaming;
class Save:public ISave {
public://Data public
    //Constructors without parameters
    Save();
    //Destructor
    ~Save();
    // add void methods
    virtual void addPhysical(Physical* )override;//Pure Virtual
    virtual void  addDigital(Digital* )override;//Pure Virtual
    virtual void addStreaming (Streaming* )override;//Pure Virtual
    //String method
    virtual void save(const std::string &filename)override;//Pure Virtual
private://Data private
    std::vector<Digital> _listDigital;//Attribute listDigital
    std::vector<Streaming> _listStreaming;//Attribute listStreaming
    std::vector<Physical> _listPhysical;//Attribute listPhysical
    IPrint* _iPrint=new Print();
};


#endif //LAB4_SOLID_SAVE_H//End if defining
