//
// Created by dell on 23/8/2020.
//

#include "Game.h"
Game::Game():Product(){

}

Game::Game(std::string name,double price):Product(){
    Product::_name=name;
    Product::_price=price;
}
Game::~Game(){

}
const std::string & Game::getName() const {return Product::_name;}
void Game::setName(const std::string &name) {Product::_name=name;}
double Game::getPrice() const {return Product::_price;}
void Game::setPrice(double price) {Product::_price=price;}
std::string Game::toString() const {
    std::ostringstream s;
    s<<"==Game==\n";
    s<<"Name  : "<<Game::getName()<<std::endl;
    s<<"Price : "<<Game::getPrice()<<" colones"<<"\n";
    return s.str();
}