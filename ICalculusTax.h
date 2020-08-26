//
// Created by computer on 8/24/2020.
//

#ifndef LAB04_SOLID_ICALCULUSTAX_H
#define LAB04_SOLID_ICALCULUSTAX_H
#include "Game.h"


class ICalculusTax:public Game {
public:

    ICalculusTax();
    ~ICalculusTax();
    virtual double calculatePriceWithTaxGame() const = 0;
    virtual std::string toString()const=0;
};


#endif //LAB04_SOLID_ICALCULUSTAX_H
