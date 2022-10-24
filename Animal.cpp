// Aditeya Srivastava (aditeys@clemson.edu)
// https://github.com/aditeyaS/8700-assignment-2

#include "animal.h"

int Animal::count = 0;

Animal::Animal(string animalName, string givenName, string speak, string food) {
    this->animalName = animalName;
    this->givenName = givenName;
    this->speak = speak;
    this->food = food;
    count++;
}

ostream& operator<<(ostream& out, const Animal& animal) {
    out << "I am a " << animal.animalName <<
        ", my name is " << animal.givenName <<
        ", I " << animal.speak << ", and I eat " << animal.food;
    return out;
}