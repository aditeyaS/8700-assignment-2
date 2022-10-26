// Aditeya Srivastava (aditeys@clemson.edu)
// https://github.com/aditeyaS/8700-assignment-2

#ifndef LEMUR_H
#define LEMUR_H

#include "animal.h"

#include <string>
using namespace std;

class Lemur : public Animal {
    public:
        Lemur() : Animal("lemur", "", "squeak", "fruit") {}

        Animal* clone() {
            return new Lemur(*this);
        }
};

#endif
