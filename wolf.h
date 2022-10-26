// Aditeya Srivastava (aditeys@clemson.edu)
// https://github.com/aditeyaS/8700-assignment-2

#ifndef WOLF_H
#define WOLF_H

#include "animal.h"

#include <string>
using namespace std;

class Wolf : public Animal {
    public:
        Wolf() : Animal("wolf", "", "growl", "chicken") {}

        Animal* clone() {
            return new Wolf(*this);
        }
};

#endif
