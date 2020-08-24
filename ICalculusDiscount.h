//
// Created by computer on 8/24/2020.
//

#ifndef LAB04_SOLID_ICALCULUSDISCOUNT_H
#define LAB04_SOLID_ICALCULUSDISCOUNT_H
#include "Game.h"

class ICalculusDiscount: public Game {
    ICalculusDiscount();
    ~ICalculusDiscount();
    virtual double calculaeDiscount()const= 0;

protected:
    Game* _g;
    double _discount;
};


#endif //LAB04_SOLID_ICALCULUSDISCOUNT_H
