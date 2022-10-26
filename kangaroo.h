// Aditeya Srivastava (aditeys@clemson.edu)
// https://github.com/aditeyaS/8700-assignment-2

#ifndef KANGAROO_H
#define KANGAROO_H

#include "animal.h"

#include <string>
using namespace std;

class Kangaroo : public Animal {
    public:
        Kangaroo() : Animal("kangaroo", "", "click", "carrots"){}

        Animal* clone() {
            return new Kangaroo(*this);
        }
};

#endif
