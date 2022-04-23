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
#include <iostream>
#include <iomanip>
#include <cassert>
#include "Mammal.h"
#include "config.h"
using namespace std;

const string Mammal::MAMMAL_NAME = "Mammalian";

Color Mammal::getColor() const noexcept {
    return color;
}

void Mammal::setColor(const Color newColor) noexcept {
    color = newColor;
}

void Mammal::dump() const noexcept {
    assert(Animal::validate());
    Animal::dump();
    FORMAT_LINE_FOR_DUMP("MAMMAL", "Breed") << color << endl;
}
