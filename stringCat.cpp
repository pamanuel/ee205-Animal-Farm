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
        case UNKNOWN_GENDER: return "UNKNOWN_GENDER";
        case MALE: return "MALE";
        case FEMALE: return "FEMALE";
    }
    return "NULL";
}
//breed index to string
char* breedlist( const enum Breed bred ){
    switch (bred) {
        case UNKNOWN_BREED: return "UNKNOWN_BREED";
        case MAINE_COON: return "MAIN_COON";
        case MANX: return "MANX";
        case SHORTHAIR: return "SHORTHAIR";
        case PERSIAN: return "PERSIAN";
        case SPHYNX: return "SPHYNX";
    }
    return "NULL";
}

