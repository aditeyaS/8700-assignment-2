// Aditeya Srivastava (aditeys@clemson.edu)
// https://github.com/aditeyaS/8700-assignment-2

#ifndef ABSTRACT_FACTORY_H
#define ABSTRACT_FACTORY_H

#include "animal.h"

#include <string>
using namespace std;

class AbstractFactory {
    public:
        virtual Animal* CreateTiger(string givenName) = 0;
        virtual Animal* CreateWolf(string givenName) = 0;
        virtual Animal* CreateLemur(string givenName) = 0;
        virtual Animal* CreateKangaroo(string givenName) = 0;
        virtual Animal* CreateSerpent(string givenName) = 0;
};

#endif