//
// Created by dell on 23/8/2020.
//

#ifndef LAB04_SOLID_GAME_H
#define LAB04_SOLID_GAME_H
//Includes Product class
#include "Product.h"
//Class Game declaration
class Game:public Product { //Applying inheritance

public:
    //Constructors
    Game();
    Game(std::string, double);
    //Destructor
    virtual ~Game();
    //Sets and gets declarations
    virtual const std::string & getName() const;
    virtual void setName(const std::string &name);
    virtual double getPrice() const;
    virtual void setPrice(const double price);
    //toString declaration
    std::string toString() const override;

private:
    //Attributes declaration
    double _price;
    std::string _name;
};


#endif //LAB04_SOLID_GAME_H
