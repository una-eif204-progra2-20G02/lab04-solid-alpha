//
// Created by dell on 23/8/2020.
//

#include "Game.h"
Game::Game():Product(){

}

Game::Game(string name,double price):Product(){
    Producto::_name=name;
    Producto::_price=price;
}
Game::~Game(){

}
const string & Game::getName() const {return Product::_name;}
void Game::setName(const string &name) {Product::_name=name;}
double Game::getPrice() {return Product::_price;}
void Game::setPrice(double price) {Product::_price=price;}
string Game::toString() const {
    ostringstream s;
    s<<"==Game==\n";
    s<<"Name  : "<< Product::_name<<endl;
    s<<"Price : "<<Product::_price<<endl;
    return s.str();
}