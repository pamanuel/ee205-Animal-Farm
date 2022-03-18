///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.h
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include <stdbool.h>
#include "catDatabase.h"

extern bool updateCatName(int index, char newName []);
extern bool fixCat(int index);
extern bool updateCatWeight(int index, float newWeight);
extern bool updateCatCollar1(int index, enum Color collarcolor1);
extern bool updateCatCollar2(int index, enum Color collarcolor2);
extern bool updatelicense(int index, unsigned long long newlicense);
