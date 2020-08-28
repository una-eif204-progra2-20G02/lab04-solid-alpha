//
// Created by Pc on 24/8/2020.
//

#ifndef LAB04_SOLID_PHYSICAL_H//Conditional of defining Class
#define LAB04_SOLID_PHYSICAL_H//Defining Class
#include "Game.h"//Calling Game .h
#include "IEspecificationsDiscountClass.h"//Calling IEspecificationsDiscountClass .h
#include "ICalculusTax.h"//Calling ICalculusTax .h

class Physical : public ICalculusTax,public IEspecificationsDiscount{//Inheritance Classes, and declaration class
//Methods
public://public data
    //Constructor without parameters
    Physical();
    //Constructor with parameters
    Physical(double,double,std::string, Game*);
    //Destructor
    ~Physical();
    // Gets methods
    virtual Game* getGame()const;
    virtual std::string getProductDimensions()const;
    virtual double getItemWeight()const;
    virtual double getTax()const;
    // Sets methods
    virtual void setGame(Game*);
    virtual void setProductDimensions(std::string);
    virtual void setItemWeight(double);
    virtual void setTax(double);
    //Double calculate tax
    virtual double calculatePriceWithTaxGame() const override;//Virtual override
    //String method
    virtual std::string toString()const;//Virtual
    //Attributes
private://private data
    double _tax;//Attribute tax
    Game* _game=new Game();//Pointer to the Class Game
    double _itemWeight;//Attribute itemWeight
    std::string _productDimensions;//Attribute productDimensions
};

#endif //LAB04_SOLID_PHYSICAL_H//End if defining
