// Aditeya Srivastava (aditeys@clemson.edu)
// https://github.com/aditeyaS/8700-assignment-2

#ifndef ANIMAL_FACTORY_H
#define ANIMAL_FACTORY_H

#include "abstractFactory.h"
#include "animal.h"
#include "tiger.h"
#include "wolf.h"
#include "lemur.h"
#include "kangaroo.h"
#include "serpent.h"

class AnimalFactory: public AbstractFactory{
    public:
        Animal* CreateTiger (string givenName) {
            return new Tiger(givenName);
        }
        Animal* CreateWolf (string givenName) {
            return new Wolf(givenName);
        }
        Animal* CreateLemur (string givenName) {
            return new Lemur(givenName);
        }
        Animal* CreateKangaroo (string givenName) {
            return new Kangaroo(givenName);
        }
        Animal* CreateSerpent (string givenName) {
            return new Serpent(givenName);
        }
};

#endif