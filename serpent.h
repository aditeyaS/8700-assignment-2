// Aditeya Srivastava (aditeys@clemson.edu)
// https://github.com/aditeyaS/8700-assignment-2

#ifndef SERPENT_H
#define SERPENT_H

#include "animal.h"

#include <string>
using namespace std;

class Serpent : public Animal {
    public:
        Serpent() : Animal("serpent", "", "hiss", "mice") {}
        
        Animal* clone() {
            return new Serpent(*this);
        }
};

#endif
