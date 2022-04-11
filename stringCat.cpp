///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file stringCat.cpp
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////

//convert enum index to string
//gender index to string
#include "stringCat.h"

char* genlist( const enum Gender gen ){
    switch (gen) {
        case 0: return "UNKNOWN_GENDER";
        case 1: return "MALE";
        case 2: return "FEMALE";
    }
    return "Invalid Gender";
}
//breed index to string
char* breedlist( const enum Breed bred ){
    switch (bred) {
        case 0: return "UNKNOWN_BREED";
        case 1: return "MAIN_COON";
        case 2: return "MANX";
        case 3: return "SHORTHAIR";
        case 4: return "PERSIAN";
        case 5: return "SPHYNX";
    }
    return "Invalid Breed";
}

