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

#include <iostream>
#include <iomanip>
#include <cassert>
#include "Cat.h"
#include "stringCat.h"
using namespace std;

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

const char *Cat::getName() const {
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

/// Format a line for printing the members of a class
#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)
/// @returns true if everything worked correctly. false if something goes
/// wrong
bool Cat::print() const noexcept {
    assert( validate() ) ;
    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE( "Cat", "name" ) << getName() << endl ;
    FORMAT_LINE( "Cat", "gender" ) << genlis( getGender() ) << endl ;
    FORMAT_LINE( "Cat", "breed" ) << breedlis( getBreed() ) << endl ;
    FORMAT_LINE( "Cat", "isFixed" ) << isFixed() << endl ;
    FORMAT_LINE( "Cat", "weight" ) << getWeight() << endl ;
    return true ;
}