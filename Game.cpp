//
// Created by dell on 23/8/2020.
//

#include "Game.h"
Game::Game() {

}

Game::Game(string name,double price):Producto(){
    Producto::_name=name;
    Producto::_price=price;
}
Game::~Game(){

}
const string & Game::getName() const {return Producto::_name;}
void Game::setName(const string &name) {Producto::_name=name;}
double Game::getPrice() {return Producto::_price;}
void Game::setPrice(double price) {Producto::_price=price;}
string Game::toString() const {
    ostringstream s;
    s<<"==Game==\n";
    s<<"Nombre: "<< Producto::_name<<endl;
    s<<"Precio: "<<Producto::_price<<endl;
    return s.str();
}