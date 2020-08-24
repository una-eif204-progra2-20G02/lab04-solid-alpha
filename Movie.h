//
// Created by dell on 23/8/2020.
//

#ifndef LAB04_SOLID_MOVIE_H
#define LAB04_SOLID_MOVIE_H

#include "Producto.h"

class Movie:public Producto {
private:
    //
public:
    Movie(string, double);
    virtual ~Movie();
    const string & getName() const override;
    void setName(const string &name) override;
    double getPrice() override;
    void setPrice(double price) override;
    string toString() const override;

};


#endif //LAB04_SOLID_MOVIE_H
