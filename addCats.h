///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "catDatabase.h"
extern bool addCat( const char name[],
                    const enum Gender gender,
                    const enum Breed breed,
                    const bool isfixed,
                    const float weight,
                    const enum Color collarcolor1,
                    const enum Color collarcolor2,
                    const unsigned long long license);
