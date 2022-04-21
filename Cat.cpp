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
#include "config.h"
using namespace std;

///clear database
void Cat::clearData(){
    name    = "NULL";
    gender  = UNKNOWN_GENDER;
    breed   = UNKNOWN_BREED;
    isfixed = false;
    weight  = 0;
    next    = nullptr;
}

Cat::Cat(){
    clearData();
}
///constructor
Cat::Cat(const string& newName, const Gender newGender, const Color newBreed, const Weight newWeight): Cat(){
    setName(newName);
    setGender(newGender);
    setBreed(newBreed);
    setWeight(newWeight);
    assert(validate());
}

Cat::~Cat() {
    clearData();
}

void Cat::setName(const string& newName) {
    checkName(newName);///validate usable name
    name = newName;
}
////return characteristics
string Cat::getName() const {
    return name;
}

Weight Cat::getWeight() const {
    return weight;
}

Gender Cat::getGender() const {
    return gender;
}

Color Cat::getBreed() const {
    return breed;
}

bool Cat::isFixed() const {
    return isfixed;
}

void Cat::fixCat() {
    Cat::isfixed = true;
}
///end of returning characteristics

void Cat::setWeight(Weight newWeight) {
    checkWeight( newWeight );
    Cat::weight = newWeight;
}

void Cat::setBreed(Color newBreed) {
    if(breed == UNKNOWN_BREED){
        Cat::breed = newBreed;
    }
    else{
        fprintf(stderr,"%s: Color is already set",PROGRAM_NAME);
    }
}

void Cat::setGender(Gender newGender) {
    if(gender == UNKNOWN_GENDER){
        Cat::gender = newGender;
    }
    else{
        fprintf(stderr,"%s: Gender is already set",PROGRAM_NAME);
    }
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
    FORMAT_LINE( "Cat", "gender" ) << getGender() << endl ;
    FORMAT_LINE( "Cat", "breed" ) <<  getBreed()  << endl ;
    FORMAT_LINE( "Cat", "isFixed" ) << isFixed() << endl ;
    FORMAT_LINE( "Cat", "weight" ) << getWeight() << endl ;
    return true ;
}
bool Cat::validate() const noexcept {
    try {
        checkName(name);
        checkWeight(weight);
    }
    catch (exception const &e){
        cout << e.what() << endl;
        return false;
    }
    return true;
}

