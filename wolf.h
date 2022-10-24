// Aditeya Srivastava (aditeys@clemson.edu)
// https://github.com/aditeyaS/8700-assignment-2

#ifndef WOLF_H
#define WOLF_H

#include "animal.h"

#include <string>
using namespace std;

class Wolf : public Animal {
    private:
        static int count;
    public:
        Wolf(string givenName) : Animal("wolf", givenName, "growl", "chicken"){
            count ++;
        }
        static int getCount() {return count;}
};

#endif

int Wolf::count = 0;