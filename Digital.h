//
// Created by Pc on 24/8/2020.
//

#ifndef LAB04_SOLID_DIGITAL_H
#define LAB04_SOLID_DIGITAL_H
#include <vector>
#include "Game.h"
#include "Movie.h"
#include "ICalculusTax.h"
#include "ICalculusDiscount.h"
class Game;
class Movie;
class Digital :public ICalculusTax, public ICalculusDiscount
{
public:
    Digital();
    Digital(double,double,Game*, Movie*);
    ~Digital();
    virtual double getDiscount()const ;
    virtual double getTax()const;
    virtual void setDiscount(double);
    virtual void setTax(double);
    virtual Game* getGame()const;
    virtual void setGame(Game*);
    virtual Movie* getMovie()const;
    virtual void setMovie(Movie*);
    virtual double calculatePriceWithTaxGame()const override;
    virtual double calculateDiscountGame()const override;
    virtual double calculatePriceWithTaxMovie()const override;
    virtual double calculateDiscountMovie()const override;
    virtual std::string toString()const;
private:
    double _tax;
    double _discount;
    ICalculusTax* _ct;
    ICalculusDiscount* _cd;
    Game* _game=new Game();
    Movie* _movie=new Movie();
};
#endif //LAB04_SOLID_DIGITAL_H
