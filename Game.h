//
// Created by dell on 23/8/2020.
//

#ifndef LAB04_SOLID_GAME_H//Conditional of defining Class
#define LAB04_SOLID_GAME_H//Defining Class

#include "Product.h"//Calling Product .h

class Game:public Product {//Inheritance Classes, and declaration class
//Methods
public://public data
    //Constructor without parameters
    Game();
    //Constructor with parameters
    Game(std::string, double);
    //Destructor
    virtual ~Game();
    // Gets methods
    virtual double getPrice() const;
    virtual const std::string & getName() const;
    // Sets methods
    virtual void setName(const std::string &name);
    virtual void setPrice(const double price);
    //String method
    std::string toString() const override;//Virtual override
//Attributes
private://private data
    double _price;//Attribute price
    std::string _name;//Attribute name;
};


#endif //LAB04_SOLID_GAME_H//End if defining
