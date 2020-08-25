//
// Created by Maikol Guzman on 8/17/20.
//

#include <iostream>
#include "Recive.h"
int main() {


    Game* _game0=new Game("Resident Evil",60000);
    Game* _game1=new Game("Far Cry",50000);

    Digital* _digital0=new Digital(0.15,0.20,_game0);
    Digital* _digital1=new Digital(0.17,0.29,_game1);


    Streaming* _streaming0=new Streaming(0.15,_game0);
    Streaming* _streaming1=new Streaming(0.19,_game1);


    Physical* _physical0=new Physical(0.15,0.567, "20x5x25 cm",_game0);
    Physical* _physical1=new Physical(0.19,0.567, "20x5x25 cm",_game1);


    Recive* _recive0=new Recive("mariamagdalena@gmail.com");

    _recive0->addDigital(_digital1);
    _recive0->addStreaming(_streaming0);

    Recive* _recive1=new Recive("josedanimatea@gmail.com");

    _recive1->addDigital(_digital0);
    _recive1->addStreaming(_streaming1);

    Recive* _recive2=new Recive("cristo@gmail.com");

    _recive2->addPhysical(_physical0);
    _recive2->addStreaming(_streaming1);

    Recive* _recive3=new Recive("santamaria@gmail.com");

    _recive3->addPhysical(_physical1);
    _recive3->addDigital(_digital0);

    std::cout<<_recive0->toString();
    std::cout<<_recive1->toString();
    std::cout<<_recive2->toString();
    std::cout<<_recive3->toString();

    _recive0->save("../save0.txt");
    _recive1->save("../save1.txt");
    _recive2->save("../save2.txt");
    _recive3->save("../save3.txt");








    return 0;
}