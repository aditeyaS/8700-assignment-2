// Aditeya Srivastava (aditeys@clemson.edu)
// https://github.com/aditeyaS/8700-assignment-2

#ifndef KANGAROO_H
#define KANGAROO_H

#include "animal.h"

#include <string>
using namespace std;

class Kangaroo : public Animal {
    private:
        static int count;
    public:
        Kangaroo(string givenName) : Animal("kangaroo", givenName, "click", "carrots"){
            count++;
        }
        static int getCount() {return count;}
};

#endif

int Kangaroo::count = 0;