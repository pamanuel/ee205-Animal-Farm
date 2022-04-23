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
///constructor


void Cat::setName(const string& newName) {
    checkName(newName);///validate usable name
    name = newName;
}
////return characteristics
string Cat::getName() const {
    return name;
}

bool Cat::isFixed() const {
    return isfixed;
}

void Cat::fixCat() {
    Cat::isfixed = true;
}
///end of returning characteristics


/// Format a line for printing the members of a class
#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)
/// @returns true if everything worked correctly. false if something goes
/// wrong
void Cat::dump() const noexcept{
    assert( validate() );
    Mammal::dump();
    FORMAT_LINE( "Cat", "name" ) << getName() << endl ;
    FORMAT_LINE( "Cat", "isFixed" ) << isFixed() << endl ;
    FORMAT_LINE( "Cat", "weight" ) << getWeight() << endl ;
}
bool Cat::validateName(const string &newName) {
    if (newName.length() <= 0){
        fprintf(stderr,"%s: No name entered",PROGRAM_NAME);
        return false;
    }
    if (newName.length() >= MAX_CAT_NAMES){
        fprintf(stderr,"%s: Name too long",PROGRAM_NAME);
        return false;
    }
    return true;
}
bool Cat::validate() const noexcept {
    try {
        validateName( name );
    }
    catch (exception const &e){
        cout << e.what() << endl;
        return false;
    }
    return true;
}

std::string Cat::speak() const noexcept {
    cout << "Meow" << endl;
}


