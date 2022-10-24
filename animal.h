// Aditeya Srivastava (aditeys@clemson.edu)
// https://github.com/aditeyaS/8700-assignment-2

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
using namespace std;

class Animal {
    private:
        string animalName;
        string givenName;
        string speak;
        string food;
        static int count;

    public:
        Animal(string animalName, string givenName, string speak, string food);
        static int getCount() {return count;}
        friend ostream& operator<<(ostream &out, const Animal &animal);
};

#endif