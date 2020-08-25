//
// Created by computer on 8/24/2020.
//

#ifndef LAB04_SOLID_ICALCULUSDISCOUNT_H
#define LAB04_SOLID_ICALCULUSDISCOUNT_H
#include "Game.h"
#include "Movie.h"

class ICalculusDiscount: public Game,public Movie {
public:

    ICalculusDiscount();
    ~ICalculusDiscount();
    virtual double calculateDiscountGame()const = 0;
    virtual double calculateDiscountMovie()const = 0;
public:
    double _discount;
};


#endif //LAB04_SOLID_ICALCULUSDISCOUNT_H
