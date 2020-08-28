//
// Created by Maikol Guzman on 8/17/20.
//

#include <iostream>
#include "Recive.h"
int main() {
    //Dynamic Game type objects declaration
    Game* _game0=new Game("Resident Evil",60000);
    Game* _game1=new Game("Far Cry",50000);
    Game* _game2=new Game("God of War",80000);
    //Dynamic Digital type objects declaration
    Digital* _digital0=new Digital(0.15,0.20,_game0);
    Digital* _digital1=new Digital(0.17,0.29,_game1);
    Digital* _digital2=new Digital(0.25,0.40,_game2);
    //Dynamic Streaming type objects declaration
    Streaming* _streaming0=new Streaming(0.15,_game0);
    Streaming* _streaming1=new Streaming(0.19,_game1);
    Streaming* _streaming2=new Streaming(0.17,_game2);
    //Dynamic Physical type objects declaration
    Physical* _physical0=new Physical(0.15,0.567, "20x5x25 cm",_game0);
    Physical* _physical1=new Physical(0.19,0.567, "20x5x25 cm",_game1);
    Physical* _physical2=new Physical(0.40,0.567, "20x5x25 cm",_game2);
    //Dynamic Recive type object declaration
    Recive* _recive0=new Recive("mariamagdalena@gmail.com");
    //Adding objects in Recive type object
    _recive0->addDigital(_digital2);
    _recive0->addStreaming(_streaming0);
    _recive0->addStreaming(_streaming1);
    //Dynamic Recive type object declaration
    Recive* _recive1=new Recive("josedanimatea@gmail.com");
    //Adding objects in Recive type object
    _recive1->addDigital(_digital0);
    _recive1->addDigital(_digital2);
    _recive1->addStreaming(_streaming1);
    _recive1->addStreaming(_streaming0);
    //Dynamic Recive type object declaration
    Recive* _recive2=new Recive("cristo@gmail.com");
    //Adding objects in Recive type object
    _recive2->addPhysical(_physical0);
    _recive2->addPhysical(_physical2);
    _recive2->addStreaming(_streaming1);
    //Dynamic Recive type object declaration
    Recive* _recive3=new Recive("santamaria@gmail.com");
    //Adding objects in Recive type object
    _recive3->addPhysical(_physical1);
    _recive3->addPhysical(_physical2);
    _recive3->addDigital(_digital0);
    //Printing Recive type objects
    std::cout<<_recive0->toString();
    std::cout<<_recive1->toString();
    std::cout<<_recive2->toString();
    std::cout<<_recive3->toString();
    //Creating new text files
    _recive0->save("../save0.txt");
    _recive1->save("../save1.txt");
    _recive2->save("../save2.txt");
    _recive3->save("../save3.txt");

    //Deleting dynamic objects
    delete _game0;
    delete _game1;
    delete _game2;

    delete _digital0;
    delete _digital1;
    delete _digital2;

    delete _streaming0;
    delete _streaming1;
    delete _streaming2;

    delete _physical0;
    delete _physical1;
    delete _physical2;
    delete _physical0;

    delete _recive0;
    delete _recive1;
    delete _recive2;
    delete _recive3;

    return 0;
}