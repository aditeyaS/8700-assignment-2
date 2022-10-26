// Aditeya Srivastava (aditeys@clemson.edu)
// https://github.com/aditeyaS/8700-assignment-2

#ifndef ZOO_H
#define ZOO_H

#include "animal.h"

#include <vector>
#include <string>
using namespace std;

class Zoo {
    private:
        int tigerCount = 0;
        int wolfCount = 0;
        int lemurCount = 0;
        int kangarooCount = 0;
        int serpentCount = 0;

        vector<Animal*> animalList;
        bool readSuccess;

        static Zoo* instance;
        Zoo(){}

    public:
        Zoo(const Zoo&) = delete;
        static Zoo* getInstance() {
            if(!instance) instance = new Zoo;
            return instance;
        }

        void read(vector<string> input);
        void display();

        ~Zoo() {animalList.clear();}
};

#endif