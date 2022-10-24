// Aditeya Srivastava (aditeys@clemson.edu)
// https://github.com/aditeyaS/8700-assignment-2

#ifndef SERPENT_H
#define SERPENT_H

#include "animal.h"

#include <string>
using namespace std;

class Serpent : public Animal {
    private:
        static int count;
    public:
        Serpent(string givenName) : Animal("serpent", givenName, "hiss", "mice"){
            count++;
        }
        static int getCount() {return count;}
};

#endif

int Serpent::count = 0;