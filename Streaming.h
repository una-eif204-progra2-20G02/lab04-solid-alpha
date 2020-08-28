//
// Created by computer on 8/24/2020.
//

#ifndef LAB04_SOLID_STREAMING_H//Conditional of defining Class
#define LAB04_SOLID_STREAMING_H//Defining Class
#include "Game.h"//Calling Game Class .h
#include "ICalculusTax.h"//Calling ICalculusTax Class .h
class Streaming:public ICalculusTax {//Inheritance Class, and declaration class
    //Methods
public://public data
    //Constructor with out parameters
    Streaming();
    //Destructor
    Streaming(double, Game*);
    //Destructor
    ~Streaming();
    // Gets methods
    virtual Game* getGame()const;
    virtual double getTax() const;
    // Sets methods
    virtual void setGame(Game*);
    virtual void setTax(double tax);
    //Double calculate tax
    virtual double calculatePriceWithTaxGame()const override;//Virtual overrida
    //String method
    virtual std::string toString()const;//Virtual
    //Attributes
private://private data
    double _tax;//Attribute tax
    Game* _game=new Game();//Pointer to the Class Game
};


#endif //LAB04_SOLID_STREAMING_H//End if defining
