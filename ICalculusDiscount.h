//
// Created by computer on 8/24/2020.
//
/*Interface ICalculusDiscout*/
#ifndef LAB04_SOLID_ICALCULUSDISCOUNT_H//Conditional of defining Class
#define LAB04_SOLID_ICALCULUSDISCOUNT_H//Defining Class
#include "Game.h"//Calling Game .h


class ICalculusDiscount: public Game {//Inheritance Class, and declaration class
    //Methods
public://public data
    //Constructor without parameters
    ICalculusDiscount();
    //Destructor
    ~ICalculusDiscount();
    //Double calculate discount
    virtual double calculateDiscountGame()const = 0;//Pure virtual
    //String method
    virtual std::string toString()const=0;//Pure virtual

};


#endif //LAB04_SOLID_ICALCULUSDISCOUNT_H//End if defining
