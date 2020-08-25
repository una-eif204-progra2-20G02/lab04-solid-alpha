//
// Created by computer on 8/24/2020.
//

#ifndef LAB04_SOLID_RECIVE_H
#define LAB04_SOLID_RECIVE_H
#include <vector>
#include <iostream>
#include <fstream>
#include "Streaming.h"
#include "Digital.h"
#include "Physical.h"

class Physical;
class Digital;
class Streaming;
class Recive {
public:
    Recive(std::string);
    ~Recive();
    virtual std::string getEmail()const;
    virtual void setEmail(std::string);
   virtual Physical* getPhysical()const;
    virtual void setPhysical(Physical*);
    virtual Digital* getDigital()const;
   virtual void setDigital(Digital*);
    virtual Streaming* getStreaming()const;
    virtual void setStreaming(Streaming*);
    virtual void addPhysical(Physical*);
    virtual void addDigital(Digital*);

    [[maybe_unused]] virtual void addStreaming(Streaming*);
    virtual void save(const std::string &filename);
    virtual std::string toString()const;
private:
    std::string _email;
    Digital* _digital=new Digital();
    Streaming* _streaming= new Streaming();
    Physical* _physical=new Physical();
    std::vector<Digital> _listDigital;
    std::vector<Streaming> _listStreaming;
    std::vector<Physical> _listPhysical;
};


#endif //LAB04_SOLID_RECIVE_H
