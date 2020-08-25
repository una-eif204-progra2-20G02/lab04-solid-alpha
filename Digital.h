//
// Created by Pc on 24/8/2020.
//

#ifndef LAB04_SOLID_DIGITAL_H
#define LAB04_SOLID_DIGITAL_H
#include <iostream>
#include <sstream>
#include "Game.h"
#include "Movie.h"
#include "ICalculusTax.h"
#include "ICalculusDiscount.h"
using namespace std;
class Digital : public Game, public Movie, public ICalculusTax, public ICalculusDiscount
{
private:
    Game* _games;
    Movie* _movies;
    ICalculusTax* _iCalculusTax;
    ICalculusDiscount* _iCalculusDiscount;
public:
    Digital(ICalculusTax*, ICalculusDiscount*,Movie*,Game*);
    ~Digital();
    double getDiscount();
    double getTax();
    void setDiscount(double);
    void setTax(double);
    double calculatePriceWithTax() override;
    double calculateDiscount() override;
    string toString();
};
#endif //LAB04_SOLID_DIGITAL_H
