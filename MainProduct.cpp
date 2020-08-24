//
// Created by Maikol Guzman on 8/17/20.
//

#include <iostream>
#include "Game.h"
#include "Movie.h"
int main() {

    Producto* x= new Movie("ana no duerme",23222);
    cout<<x->toString()<<endl;

    Producto* z=new Game("Warcry",50000);
    cout<<z->toString();
    return 0;
}