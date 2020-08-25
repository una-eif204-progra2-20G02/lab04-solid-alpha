//
// Created by Maikol Guzman on 8/17/20.
//

#include <iostream>
#include "Recive.h"
int main() {

    Movie* _m0= new Movie("Gataca",23222);
    Game* _g0=new Game("Resident Evil",50000);
    Movie* _m1= new Movie("Ovlivion",23222);
    Game* _g1=new Game("Far Cry",50000);
    Movie* _m2= new Movie("MI 5",23222);
    Game* _g2=new Game("God Of War 5",50000);
    Digital* _d0=new Digital(0.15,0.20,_g0,_m2);
    Streaming* _s0=new Streaming(0.15,_g1,_m0);
    Physical* _p0=new Physical(0.15,0.567, "4x5x6 cm",_g2, _m2);
    Recive* _r0=new Recive("santamaria@gmail.com");
    _r0->setStreaming(_s0);
    _r0->addDigital(_d0);
    _r0->setPhysical(_p0);

    std::cout<<_r0->toString();
    _r0->save("../save.txt");








    return 0;
}