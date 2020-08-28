//
// Created by computer on 8/24/2020.
//

#ifndef LAB04_SOLID_RECIVE_H
#define LAB04_SOLID_RECIVE_H
//Includes libraries
#include <vector>
#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
#include "Streaming.h"
#include "Digital.h"
#include "Physical.h"
//Physical,Digital and streaming classes declaration
class Physical;
class Digital;
class Streaming;
class Recive { //Recive class declaration
public:
    //Constructors
    Recive(std::string);
    Recive(std::string, Digital*const, Streaming* const, Physical* const);
    //Destructors
    ~Recive();
    //Email set and get
    virtual std::string getEmail()const;
    virtual void setEmail(std::string);
    //Physical set and get
    virtual Physical* getPhysical()const;
    virtual void setPhysical(Physical*);
    //Digital set and get
    virtual Digital* getDigital()const;
    virtual void setDigital(Digital*);
    //Streaming set and get
    virtual Streaming* getStreaming()const;
    virtual void setStreaming(Streaming*);
    //Add methods.
    virtual void addPhysical(Physical* );
    virtual void  addDigital(Digital* );
    virtual void addStreaming (Streaming* );
    //Save method declaration
    virtual void save(const std::string &filename);
    //toString declaration
    virtual std::string toString()const;
private://Private attributes
    std::string _email;//Attribute declaration
    Digital* _digital=new Digital();//Attribute declaration
    Streaming* _streaming= new Streaming();//Attribute declaration
    Physical* _physical=new Physical();//Attribute declaration
    std::vector<Digital> _listDigital;//Attribute declaration
    std::vector<Streaming> _listStreaming;//Attribute declaration
    std::vector<Physical> _listPhysical;//Attribute declaration
};


#endif //LAB04_SOLID_RECIVE_H
