//
// Created by Pc on 24/8/2020.
//

#ifndef LAB04_SOLID_DIGITAL_H//Conditional of defining Class
#define LAB04_SOLID_DIGITAL_H//Defining Class
#include <vector>//Calling Library vector
#include "Game.h"//Calling Game .h
#include "ICalculusTax.h"//Calling ICalculusTaxClass .h
#include "ICalculusDiscount.h"//Calling ICalculusDiscount Class .h

class Digital :public ICalculusTax, public ICalculusDiscount//Inheritance Classes, and declaration class
{
    //Methods
public://public data
    //Constructor without parameters
    Digital();
    //Constructor with parameters
    Digital(double,double,Game*);
    //Destructor
    ~Digital();
    // Gets methods
    virtual double getDiscount()const ;
    virtual double getTax()const;
    virtual Game* getGame()const;
    // Sets methods
    virtual void setDiscount(double);
    virtual void setTax(double);
    virtual void setGame(Game*);
    virtual double calculatePriceWithTaxGame()const override;
    virtual double calculateDiscountGame()const override;
    //String method
    virtual std::string toString()const;//Virtual
    //Attributes
private://private data
    double _tax;//Attribute tax
    double _discount;//Attribute discount
    Game* _game=new Game();//Pointer to the Class Game

};
#endif //LAB04_SOLID_DIGITAL_H//End if defining
