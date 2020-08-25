//
// Created by Pc on 24/8/2020.
//

#ifndef LAB04_SOLID_PHYSICAL_H
#define LAB04_SOLID_PHYSICAL_H
#include "Game.h"
#include "Movie.h"
#include "IEspecificationsDiscountClass.h"
#include "ICalculusTax.h"

class Physical : public ICalculusTax,public IEspecificationsDiscount{
public:
    Physical();
    Physical(double,double,std::string, Game*,Movie*);
    ~Physical();
    virtual Game* getGame()const;
    virtual void setGame(Game*);
    virtual Movie* getMovie()const;
    virtual void setMovie(Movie*);
    virtual std::string getProductDimensions()const;
    virtual double getItemWeight()const;
    virtual double getTax()const;
    virtual void setProductDimensions(std::string);
    virtual void setItemWeight(double);
    virtual void setTax(double);
    virtual double calculatePriceWithTaxGame() const override;
    virtual double calculatePriceWithTaxMovie() const override;
    virtual std::string toString()const;
private:
    double _tax;
    Game* _game=new Game();
    Movie* _movie=new Movie();
    double _itemWeight;
    std::string _productDimensions;
};

#endif //LAB04_SOLID_PHYSICAL_H
