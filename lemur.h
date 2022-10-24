// Aditeya Srivastava (aditeys@clemson.edu)
// https://github.com/aditeyaS/8700-assignment-2

#ifndef LEMUR_H
#define LEMUR_H

#include "animal.h"

#include <string>
using namespace std;

class Lemur : public Animal {
    private:
        static int count;
    public:
        Lemur(string givenName) : Animal("lemur", givenName, "squeak", "fruit"){
            count++;
        }
        static int getCount() {return count;}
};

#endif

int Lemur::count = 0;