// Aditeya Srivastava (aditeys@clemson.edu)
// https://github.com/aditeyaS/8700-assignment-2

#include "zoo.h"
#include "nameFactory.h"
#include "abstractFactory.h"
#include "animalFactory.h"

#include <iostream>
#include <vector>
#include <string>
using namespace std;

Zoo* Zoo::instance;

void Zoo::read(vector<string> input) {
    if (input.size()%2 != 0) {
        cout << "Invalid input!" << endl;
        readSuccess = false;
        return;
    }

    int givenNameIndex = 0;
    NameFactory nameFactory;
    AbstractFactory* animalFactory = new AnimalFactory();

    for (int iterator = 0; iterator < input.size()-1; iterator += 2) {
        int quantity;
        try {
            quantity = stoi(input.at(iterator + 1));
        } catch(...) {
            cout << "Invalid animal quantity!" << endl;
            readSuccess = false;
            return;
        }

        if(quantity <= 0) {
            continue;
        } 

        if(input.at(iterator) == "tiger") {
            while(quantity!=0) {
                Animal* tiger = animalFactory->CreateTiger(nameFactory.getName(givenNameIndex++));
                animalList.push_back(tiger);
                quantity--;
            }
        } else if(input.at(iterator) == "wolf") {
            while(quantity!=0) {
                Animal* wolf = animalFactory->CreateWolf(nameFactory.getName(givenNameIndex++));
                animalList.push_back(wolf);
                quantity--;
            }
        } else if(input.at(iterator) == "lemur") {
            while(quantity!=0) {
                Animal* lemur = animalFactory->CreateLemur(nameFactory.getName(givenNameIndex++));
                animalList.push_back(lemur);
                quantity--;
            }
        } else if(input.at(iterator) == "kangaroo") {
            while(quantity!=0) {
                Animal* kangaroo = animalFactory->CreateKangaroo(nameFactory.getName(givenNameIndex++));
                animalList.push_back(kangaroo);
                quantity--;
            }
        } else if(input.at(iterator) == "serpent") {
            while(quantity!=0) {
                Animal* serpent = animalFactory->CreateSerpent(nameFactory.getName(givenNameIndex++));
                animalList.push_back(serpent);
                quantity--;
            }
        } else {
            cout << "Invalid animal name!" << endl;
            readSuccess = false;
            return;
        }
    }
    readSuccess = true;
}

void Zoo::display() {
    if (!readSuccess) return;
    cout << "Zoo \"Wild Things\" is home to the following animals:" <<endl;
    cout << "---------------------------------" <<endl;
    cout << "There are total " << Animal::getCount() << " animals in the Zoo" << endl;
    cout << "There are " << Tiger::getCount() << " tigers, " <<
        Wolf::getCount() << " wolves, " << Kangaroo::getCount() <<
        " kangaroo, " << Lemur::getCount() << " lemur and " <<
        Serpent::getCount() << " serpents." << endl;
    for (int i=0; i<animalList.size(); i++) {
        cout << *animalList.at(i) << endl;
    }
}