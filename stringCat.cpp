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
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "stringCat.h"

char* genlis( const enum Gender gen ){
    switch (gen) {
        case 0: return "UNKNOWN_GENDER";
        case 1: return "MALE";
        case 2: return "FEMALE";
    }
    return "NULL";
}
//breed index to string
char* breedlis( const enum Breed bred ){
    switch (bred) {
        case 0: return "UNKNOWN_BREED";
        case 1: return "MAIN_COON";
        case 2: return "MANX";
        case 3: return "SHORTHAIR";
        case 4: return "PERSIAN";
        case 5: return "SPHYNX";
    }
    return "NULL";
}

//same as collarcolor2
char* colorlis( const enum Color color ){
    switch (color) {
        case 0: return "BLACK";
        case 1: return "WHITE";
        case 2: return "RED";
        case 3: return "BLUE";
        case 4: return "GREEN";
        case 5: return "PINK";
    }
    return "NULL";
}
