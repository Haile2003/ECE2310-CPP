// PET.cpp
#include <iostream>

#include <string>

#include "Pet.h"

using namespace std;
PET::PET() : name("Pet"), age(-1), owner("Owner"), isHouseTrained(false) {}

PET::PET(string name, int age, string owner, bool isHouseTrained) {
    this->name = name;
    this->age = age;
    this->owner = owner;
    this->isHouseTrained = isHouseTrained;
}

string PET::getName() {
    return name;
}

int PET::getAge() {
    return age;
}

string PET::getOwner() {
    return owner;
}

bool PET::getIsHouseTrained() {
    return isHouseTrained;
}

void PET::updateName(string name) {
    this->name = name;
}

void PET::updateAge(int age) {
    this->age = age;
}

void PET::updateOwner(string adopter) {
    this->owner = adopter;
}

void PET::setIsHouseTrained() {
    this->isHouseTrained = true;
}

