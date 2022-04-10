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

Cat::Cat(const char* newName, const Gender newGender, const Breed newBreed, const Weight newWeight): Cat(){
    setName(newName);
    setGender(newGender);
    setBreed(newBreed);
    setWeight(newWeight);
}

Cat::~Cat() {
    clearData();
}

