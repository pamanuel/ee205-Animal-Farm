///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Mammal.cpp
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   20_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "Mammal.h"

Mammal::Mammal(const Weight::t_weight newMaxWeight, const string &newSpecies) {

}

Mammal::Mammal(const Breed newColor, const Gender newGender, Weight::t_weight newWeight,
               const Weight::t_weight newMaxWeight, const string &newSpecies) {

}

Breed Mammal::getColor() const noexcept {
    return Breed::MANX;
}

void Mammal::setColor(const Breed newColor) noexcept {

}

void Mammal::dump() const noexcept {
    Animal::dump();
}
