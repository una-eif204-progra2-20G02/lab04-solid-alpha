//
// Created by Pc on 24/8/2020.
//

#ifndef LAB04_SOLID_PHYSICAL_H
#define LAB04_SOLID_PHYSICAL_H
#include <iostream>
#include <sstream>
#include "Game.h"
#include "Movie.h"
#include "IEspecificationsDiscountClass.h"
#include "ICalculusTax.h"
using namespace std;
class   Physical : public Game, public Movie, public IEspecificationsDiscount, public ICalculusTax
        {
        private:
            Game* _games;
            Movie* _movies;
            ICalculusTax* _iCalculusTax;
            IEspecificationsDiscount* _iEspecifications;
        public:
            Physical(string unnamed2, double unnamed3, double unnamed, string unnamed1,
                     IEspecificationsDiscount *especificationsDiscount, ICalculusTax *calculusTax, Movie *movie,
                     Game *game);
            Physical(string unnamed2, double unnamed3, double unnamed, string unnamed1, double itemWeight,
                     string productDimensions);
            ~Physical();
            string getProductDimensions();
            double getItemWeight();
            double getTax();
            void setProductDimensions(string);
            void setItemWeight(double);
            void setTax(double);
            virtual double calculatePriceWithTax() override;
            string toString();
};

#endif //LAB04_SOLID_PHYSICAL_H
