//
// Created by dell on 23/8/2020.
//

#ifndef LAB04_SOLID_GAME_H
#define LAB04_SOLID_GAME_H

#include "Product.h"

class Game:public Product {

public:
    Game();
    Game(std::string, double);
    virtual ~Game();
    virtual const std::string & getName() const;
    virtual void setName(const std::string &name);
    virtual double getPrice() const;
    virtual void setPrice(const double price);
    std::string toString() const override;

private:
    double _price;
    std::string _name;
};


#endif //LAB04_SOLID_GAME_H
