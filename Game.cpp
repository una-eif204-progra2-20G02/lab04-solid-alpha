//
// Created by dell on 23/8/2020.
//

#include "Game.h"//Calling Game Class .h
// Constructors without parameters
Game::Game():Product(){//Constructor Game in Inheritance with Product Class

}
// Constructors with parameters
Game::Game(std::string name,double price):Product(){
   _name=name;
   _price=price;
}
//Destructor
Game::~Game(){

}
//Gets methods
const std::string & Game::getName() const {return _name;}
double Game::getPrice() const {return _price;}
//Sets methods
void Game::setName(const std::string &name) {_name=name;}
void Game::setPrice(double price) {_price=price;}
//String Method returning string
std::string Game::toString() const {
    std::ostringstream s;
    s<<"==Game==\n";
    s<<"Name  : "<<Game::getName()<<std::endl;
    s<<"Price : "<<Game::getPrice()<<" colones"<<"\n";
    return s.str();
}