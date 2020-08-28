//
// Created by computer on 8/24/2020.
//

#ifndef LAB04_SOLID_ICALCULUSTAX_H
#define LAB04_SOLID_ICALCULUSTAX_H
//Include Game class
#include "Game.h"

//Interface class ICalculusTax declaration
class ICalculusTax:public Game { //Applying inheritance
public:
//Constructors
    ICalculusTax();
    ~ICalculusTax();
    //Pure virtual methods
    virtual double calculatePriceWithTaxGame() const = 0;
    virtual std::string toString()const=0;
};


#endif //LAB04_SOLID_ICALCULUSTAX_H
