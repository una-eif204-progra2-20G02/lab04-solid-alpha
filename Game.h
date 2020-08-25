//
// Created by dell on 23/8/2020.
//

#ifndef LAB04_SOLID_GAME_H
#define LAB04_SOLID_GAME_H

#include "Product.h"

class Game:public Product {
private:
    //
public:
    Game();
    Game(std::string, double);
    virtual ~Game();
    virtual const std::string & getName() const override;
    virtual void setName(const std::string &name) override;
    virtual double getPrice() const override;
    virtual void setPrice(const double price) override;
    std::string toString() const override;

};


#endif //LAB04_SOLID_GAME_H
