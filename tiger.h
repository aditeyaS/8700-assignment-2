// Aditeya Srivastava (aditeys@clemson.edu)
// https://github.com/aditeyaS/8700-assignment-2

#ifndef TIGER_H
#define TIGER_H

#include "animal.h"

#include <string>
using namespace std;

class Tiger : public Animal {
    private:
        static int count;
    public:
        Tiger(string givenName) : Animal("tiger", givenName, "roar", "meat"){
            count++;
        }
        static int getCount() {return count;}
};

#endif

int Tiger::count = 0;