///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "Cat.h"

void Cat::clearData(){
    memset(name, 0, MAX_CAT_NAMES);
    gender = UNKNOWN_GENDER;
    breed  = UNKNOWN_BREED;
    isfixed = false;
    weight = 0;
    next = nullptr;
}

Cat::Cat(){
    clearData();
}

Cat::Cat(const char* newName, const Gender newGender, const Breed newBreed, const Weight newWeight):Cat(){
    setName(newName);
    setGender(newGender);
    setBreed(newBreed);
    setWeight(newWeight);
}

Cat::~Cat() {
    clearData();
}

void Cat::setName(const char *newName) {
    memset(name, 0, MAX_CAT_NAMES);
    strcpy(name, newName);
}

char *Cat::getName() {
    return name;
}

Weight Cat::getWeight() const {
    return weight;
}

Gender Cat::getGender() const {
    return gender;
}

Breed Cat::getBreed() const {
    return breed;
}


bool Cat::isFixed() const {
    return isfixed;
}
