//
// Created by computer on 8/24/2020.
//

#ifndef LAB04_SOLID_RECIVE_H//Conditional of defining Class
#define LAB04_SOLID_RECIVE_H//Defining Class
#include <vector>//Calling Library vector
#include <sstream>//Calling Library sstream
#include <string>//Calling Library string
#include <iostream>//Calling Library iostream
#include <fstream>//Calling Library fstream
#include "Streaming.h"//Calling Streaming Class .h
#include "Digital.h"//Calling Digital Class .h
#include "Physical.h"//Calling Physical Class .h

class Physical;//Composition Class Physical
class Digital;//Composition Class Digital
class Streaming;//Composition Class Streaming;
class Recive {//Declaration Class
    //Methods
public://public data
//Constructors with parameters
    Recive(std::string);
    Recive(std::string, Digital*const, Streaming* const, Physical* const);
    //Destructor
    ~Recive();
    // Gets methods
    virtual std::string getEmail()const;
    virtual Physical* getPhysical()const;
    virtual Digital* getDigital()const;
    virtual Streaming* getStreaming()const;
    // Sets methods
    virtual void setEmail(std::string);
    virtual void setPhysical(Physical*);
    virtual void setDigital(Digital*);
    virtual void setStreaming(Streaming*);
    // add void methods
    virtual void addPhysical(Physical* );
    virtual void  addDigital(Digital* );
    virtual void addStreaming (Streaming* );
    //Save in file void method
    virtual void save(const std::string &filename);
    //String method
    virtual std::string toString()const;//Virtual
    //Attributes
private://private data
    std::string _email;//Attribute email
    Digital* _digital=new Digital();//Pointer to the Class Digital
    Streaming* _streaming= new Streaming();//Pointer to the Class Streaming
    Physical* _physical=new Physical();//Pointer to the Class Physical
    std::vector<Digital> _listDigital;//Attribute listDigital
    std::vector<Streaming> _listStreaming;//Attribute listStreaming
    std::vector<Physical> _listPhysical;//Attribute listPhysical
};


#endif //LAB04_SOLID_RECIVE_H//End if defining
