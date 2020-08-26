//
// Created by computer on 8/24/2020.
//

#ifndef LAB04_SOLID_ICALCULUSDISCOUNT_H
#define LAB04_SOLID_ICALCULUSDISCOUNT_H
#include "Game.h"


class ICalculusDiscount: public Game {
public:

    ICalculusDiscount();
    ~ICalculusDiscount();
    virtual double calculateDiscountGame()const = 0;
    virtual std::string toString()const=0;

};


#endif //LAB04_SOLID_ICALCULUSDISCOUNT_H
