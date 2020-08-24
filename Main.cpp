//
// Created by Maikol Guzman on 8/17/20.
//

#include <iostream>
#include "Game.h"
#include "Movie.h"
int main() {

    Product* x= new Movie("ana no duerme",23222);
    std::cout<<x->toString()<<std::endl;

    Product* z=new Game("Warcry",50000);
    std::cout<<z->toString();
    return 0;
}