// Aditeya Srivastava (aditeys@clemson.edu)
// https://github.com/aditeyaS/8700-assignment-2

#ifndef TIGER_H
#define TIGER_H

#include "animal.h"

#include <string>
using namespace std;

class Tiger : public Animal {
    public:
        Tiger() : Animal("tiger", "", "roar", "meat") {}

        Animal* clone() {
            return new Tiger(*this);
        }
};

#endif
