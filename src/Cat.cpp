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
#include <string>
#include "Cat.h"
#include "config.h"
using namespace std;

const std::string Cat::SPECIES_NAME ="Felis Catis";
const Weight::t_weight Cat::MAX_WEIGHT = 40;
///constructor
void Cat::setName(const string& newName) {
    if(validateName(newName)) {///validate usable name
        name = newName;
    }
    else{
        throw std::out_of_range( "No name was entered" );
    }
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

void Cat::dump() const noexcept{
    Mammal::dump();
    FORMAT_LINE_FOR_DUMP( "Cat", "name" ) << getName() << endl ;
    FORMAT_LINE_FOR_DUMP( "Cat", "isFixed" ) << isFixed() << endl ;
}
bool Cat::validateName(const string &newName) {
    if (newName.empty()){
        fprintf(stderr,"%s: No name entered",PROGRAM_NAME);
        return false;
    }
    return true;
}
bool Cat::validate() const noexcept {
    Mammal::validate();
    validateName((getName()));
    return true;
}

std::string Cat::speak() const noexcept {
    return "Meow";
}


