//
// Created by dell on 23/8/2020.
//

#ifndef LAB04_SOLID_GAME_H
#define LAB04_SOLID_GAME_H

#include "Producto.h"

class Game:public Producto {
private:
    //
public:
    Game(string, double);
    virtual ~Game();
    const string & getName() const override;
    void setName(const string &name) override;
    double getPrice() override;
    void setPrice(double price) override;
    string toString() const override;

};


#endif //LAB04_SOLID_GAME_H
