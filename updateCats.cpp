///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.cpp
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <string.h>

#include "config.h"
#include "updateCats.h"

//Update Name
bool updateCatName(int index, char newName []){
    if ( checkIndex(index) == false ){
        fprintf( stderr, "%s: Check cat Index [%d] in the database.\n", PROGRAM_NAME, index ) ;
        return false;
    }
    if ( checkName(newName) == false){
        fprintf( stderr, "%s: Check cat name[%s] in the database.\n", PROGRAM_NAME, newName ) ;
        return false;
    }
    strcpy(catdata[index].name, newName);
    return true;

}
//Fix Cat
bool fixCat(int index){
    if ( checkIndex(index) == false ){
        fprintf( stderr, "%s: Check cat Index [%d] in the database.\n", PROGRAM_NAME, index ) ;
        return false;
    }
    catdata[index].isfixed = true;
    return true;
}
//Update Weight
bool updateCatWeight(int index, float newWeight){
    if (checkIndex(index) == false){
        fprintf( stderr, "%s: Check cat Index [%d] in the database.\n", PROGRAM_NAME, index ) ;
        return false;
    }
    if (checkWeight(newWeight) == false ){
        fprintf( stderr, "%s: Check cat Weight [%f] in the database.\n", PROGRAM_NAME, newWeight ) ;
        catdata[index].weight = newWeight;
        return false;
    }
    catdata[index].weight = newWeight;
    return true;
}

//Update collar1
bool updateCatCollar1(int index, enum Color collarcolor1){
    if (checkIndex(index) == false){
        fprintf( stderr, "%s: Check cat Index [%d] in the database.\n", PROGRAM_NAME, index ) ;
        return false;
    }
    catdata[index].collarcolor1 = collarcolor1;
    return true;
}

//Update collar2
bool updateCatCollar2(int index, enum Color collarcolor2){
    if (checkIndex(index) == false){
        fprintf( stderr, "%s: Check cat Index [%d] in the database.\n", PROGRAM_NAME, index ) ;
        return false;
    }
    catdata[index].collarcolor2 = collarcolor2;
    return true;
}

//Update newlicense
bool updatelicense(int index, unsigned long long newlicense){
    if (checkIndex(index) == false){
        fprintf( stderr, "%s: Check cat Index [%d] in the database.\n", PROGRAM_NAME, index ) ;
        return false;
    }
    catdata[index].license = newlicense;
    return true;
}
