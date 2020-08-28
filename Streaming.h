//
// Created by computer on 8/24/2020.
//

#ifndef LAB04_SOLID_STREAMING_H
#define LAB04_SOLID_STREAMING_H
#include "Game.h"
#include "ICalculusTax.h"
class Streaming:public ICalculusTax {
public:
    //Constructors
    Streaming();
    Streaming(double, Game*);
    //Destructor
    ~Streaming();
    //Sets and gets declarations
    virtual Game* getGame()const;
    virtual void setGame(Game*);
    virtual double getTax() const;
    virtual void setTax(double tax);
    //Calculate method declaration
    virtual double calculatePriceWithTaxGame()const override;
    //toString declaration
    virtual std::string toString()const;
private:
    //Attributes declaration
    double _tax;
    Game* _game=new Game();
};


#endif //LAB04_SOLID_STREAMING_H
