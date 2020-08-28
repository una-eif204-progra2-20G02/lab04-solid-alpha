//
// Created by computer on 8/24/2020.
//
/*Interface ICalculusTax*/
#ifndef LAB04_SOLID_ICALCULUSTAX_H//Conditional of defining Class
#define LAB04_SOLID_ICALCULUSTAX_H//Defining Class
#include "Game.h"//Calling Game .h


class ICalculusTax:public Game {//Inheritance Class, and declaration class
    //Methods
public://public data
    //Constructor without parameters
    ICalculusTax();
    //Destructor
    ~ICalculusTax();
    //Double calculate tax
    virtual double calculatePriceWithTaxGame() const = 0;//Pure virtual
    //String method
    virtual std::string toString()const=0;//Pure virtual
};


#endif //LAB04_SOLID_ICALCULUSTAX_H//End if defining
