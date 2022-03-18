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

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "deleteCats.h"
#include "stringCat.h"
void deleteCats() {

    for (int i = 0; i < MAX_CAT; i++){
        strcpy( catdata[i].name, " " );
        catdata[i].gender  	 = 0    ;
        catdata[i].breed   	 = 0    ;
        catdata[i].isfixed      = false;
        catdata[i].weight       = 0.0  ;
        catdata[i].collarcolor1 = 0    ;
        catdata[i].collarcolor2 = 0     ;
        catdata[i].license      = 0     ;
    }
}

void deleteCat(int index){
    for (int i = 0; i < MAX_CAT; i++){
        if (i == index){
            strcpy( catdata[index].name, " " );
            catdata[index].gender       = 0    ;
            catdata[index].breed        = 0    ;
            catdata[index].isfixed      = false;
            catdata[index].weight       = 0.0  ;
            catdata[index].collarcolor1 = 0    ;
            catdata[index].collarcolor2 = 0    ;
            catdata[index].license      = 0    ;
        }
    }
}