///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "config.h"
#include "addCats.h"
#include "stringCat.h"

bool addCat( const char name[], const enum Gender gender, const enum Breed breed, const bool isfixed, const float weight, const enum Color collarcolor1, const enum Color collarcolor2, const unsigned long long license){

    if (checkCatNum(currentcatnum) == false){
        fprintf( stderr, "%s: Check if too many cats[%d] in the database.\n", PROGRAM_NAME, currentcatnum ) ;
        return false;
    }
    if (checkName(name) == false){
        fprintf( stderr, "%s: Check if cat name valid[%s] in the database.\n", PROGRAM_NAME, name ) ;
        return false;
    }
    if (checkWeight(weight) == false){
        fprintf( stderr, "%s: Check if cat weight valid[%f] in the database.\n", PROGRAM_NAME, weight ) ;
        return false;
    }

    strcpy( catdata[currentcatnum].name, name );
    catdata[currentcatnum].gender       = gender      ;
    catdata[currentcatnum].breed        = breed       ;
    catdata[currentcatnum].isfixed      = isfixed     ;
    catdata[currentcatnum].weight       = weight      ;
    catdata[currentcatnum].collarcolor1 = collarcolor1;
    catdata[currentcatnum].collarcolor2 = collarcolor2;
    catdata[currentcatnum].license      = license     ;
    currentcatnum +=1;
    return true;

}