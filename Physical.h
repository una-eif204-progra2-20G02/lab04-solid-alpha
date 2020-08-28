//
// Created by Pc on 24/8/2020.
//

#ifndef LAB04_SOLID_PHYSICAL_H
#define LAB04_SOLID_PHYSICAL_H
//Includes libraries
#include "Game.h"
#include "IEspecificationsDiscountClass.h"
#include "ICalculusTax.h"
//Physical class declaration
class Physical : public ICalculusTax,public IEspecificationsDiscount{//Applying inheritance.
public:
    //Constructors
    Physical();
    Physical(double,double,std::string, Game*);
    //Destructor
    ~Physical();
    //Sets and gets declaration
    virtual Game* getGame()const;
    virtual void setGame(Game*);
    virtual std::string getProductDimensions()const;
    virtual double getItemWeight()const;
    virtual double getTax()const;
    virtual void setProductDimensions(std::string);
    virtual void setItemWeight(double);
    virtual void setTax(double);
    //Calculate method declaration
    virtual double calculatePriceWithTaxGame() const override;
    //toString declaration
    virtual std::string toString()const;
private:
    //Atribute declarations
    double _tax;
    Game* _game=new Game();
    double _itemWeight;
    std::string _productDimensions;
};

#endif //LAB04_SOLID_PHYSICAL_H
