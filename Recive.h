//
// Created by computer on 8/24/2020.
//

#ifndef LAB04_SOLID_RECIVE_H
#define LAB04_SOLID_RECIVE_H


class Recive {
private

    std::string _email;
    Streaming* _streaming;
    Digital* _digital;
    Physical* _physical;
    ISave _iSave;
public:
    Recive():Recive;
    ~Recive():Recive;
    virtual std::string getEmail();
    virtual void setEmail(std::string)ñ
    virtual Pyhsical* getPyhsical();
    virtual void setPyhsical(Pyhsical)ñ
    virtual getDigistal():Digistal*;
    virtual void setDigistal(Digistal*)ñ
    virtual getStreaming():Streaming*;
    virtual void setStreaming(Streaming*)ñ
    virtual ISave* getISave();
    virtual void setISave(ISave*);
    virtual IPrint* getIPrint();
    virtual void setIPrint(IPrint*);
    virtual void sendedEmail();
    virtual void addPyhsical(Physical*);
    virtual void addDigistal(Digital*);
    virtual void addStreaming(Streaming*);
    virtual void save(const std::string &filename);
    virtual std::string toString()const:;
};


#endif //LAB04_SOLID_RECIVE_H
