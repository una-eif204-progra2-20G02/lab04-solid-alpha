//
// Created by computer on 8/24/2020.
//

#ifndef LAB04_SOLID_ICALCULUSDISCOUNT_H
#define LAB04_SOLID_ICALCULUSDISCOUNT_H
//Includes Game class
#include "Game.h"

//Interface class ICalculusDiscount declaration
class ICalculusDiscount: public Game { //Applying inheritance
public:
    //Constructor
    ICalculusDiscount();
    //Destructor
    ~ICalculusDiscount();
    //Pure virtual methods declaration
    virtual double calculateDiscountGame()const = 0;
    virtual std::string toString()const=0;

};


#endif //LAB04_SOLID_ICALCULUSDISCOUNT_H
