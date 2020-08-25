//
// Created by dell on 23/8/2020.
//

#ifndef LAB04_SOLID_MOVIE_H
#define LAB04_SOLID_MOVIE_H

#include "Product.h"

class Movie:public Product {
private:
    //
public:
    Movie();
    Movie(std::string, double);
    virtual ~Movie();
    virtual const std::string & getName() const override;
    virtual void setName(const std::string &name) override;
    virtual double getPrice()const override;
    virtual void setPrice(const double price) override;
    virtual std::string toString() const override;

};


#endif //LAB04_SOLID_MOVIE_H
