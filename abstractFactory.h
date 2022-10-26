// Aditeya Srivastava (aditeys@clemson.edu)
// https://github.com/aditeyaS/8700-assignment-2

#ifndef ABSTRACT_FACTORY_H
#define ABSTRACT_FACTORY_H

#include "animal.h"

#include <string>
using namespace std;

class AbstractFactory {
    public:
        virtual Animal* CreateTiger() = 0;
        virtual Animal* CreateWolf() = 0;
        virtual Animal* CreateLemur() = 0;
        virtual Animal* CreateKangaroo() = 0;
        virtual Animal* CreateSerpent() = 0;
};

#endif