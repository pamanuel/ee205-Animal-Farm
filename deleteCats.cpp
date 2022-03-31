///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#include <string.h>
#include "deleteCats.h"
void deleteCats() {

    for (int i = 0; i < MAX_CAT; i++){
        strcpy( catdata[i].name, " " );
        catdata[i].gender  	    = UNKNOWN_GENDER;
        catdata[i].breed   	    = UNKNOWN_BREED;
        catdata[i].isfixed      = false;
        catdata[i].weight       = 0.0  ;
        catdata[i].collarcolor1 = BLACK;
        catdata[i].collarcolor2 = BLACK;
        catdata[i].license      = 0;
    }
}

void deleteCat(int index){
    for (int i = 0; i < MAX_CAT; i++){
        if (i == index){
            strcpy( catdata[index].name, " " );
            catdata[index].gender       = UNKNOWN_GENDER;
            catdata[index].breed        = UNKNOWN_BREED;
            catdata[index].isfixed      = false;
            catdata[index].weight       = 0.0  ;
            catdata[index].collarcolor1 = BLACK;
            catdata[index].collarcolor2 = BLACK    ;
            catdata[index].license      = 0    ;
        }
    }
}