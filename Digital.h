//
// Created by Pc on 24/8/2020.
//

#ifndef LAB04_SOLID_DIGITAL_H
#define LAB04_SOLID_DIGITAL_H
#include <vector>
#include "Game.h"
#include "ICalculusTax.h"
#include "ICalculusDiscount.h"
//Class Digital implementation
class Digital :public ICalculusTax, public ICalculusDiscount //Applying inheritance
{
public:
    //Constructors
    Digital();
    Digital(double,double,Game*);
    //Destructor
    ~Digital();
    //Set and gets implementation
    virtual double getDiscount()const ;
    virtual double getTax()const;
    virtual void setDiscount(double);
    virtual void setTax(double);
    virtual Game* getGame()const;
    virtual void setGame(Game*);
    //Calculate methods implementations
    virtual double calculatePriceWithTaxGame()const override;
    virtual double calculateDiscountGame()const override;
    //toString declaration
    virtual std::string toString()const;
private:
    //Attributes declarations
    double _tax;
    double _discount;
    Game* _game=new Game();

};
#endif //LAB04_SOLID_DIGITAL_H
