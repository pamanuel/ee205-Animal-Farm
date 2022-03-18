///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "catDatabase.h"
#include "config.h"

int currentcatnum = 0;
struct cat catdata[MAX_CAT];

bool checkCatNum( const int currentcatnum ){
    if (currentcatnum > MAX_CAT) {
        return false;//check size of array
    }
    return true;
}

bool checkIndex( const int index ){
    if (index <= 0){
        return false;
    }//check valid index
    if (index > MAX_CAT){
        return false;
    }
    return true;
}
bool checkWeight( const float weight ){
    if (weight < 0){
        return false;
    }//check if weight is too light
    return true;
}
bool checkName( const char name[] ){
    if (strlen(name) > MAX_CAT_NAMES - 1) {
        return false; //check name length
    }
    if (strlen(name) == 0){
        return false; //check name empty
    }
    for (int i = 0; i < MAX_CAT; i++){
        if ( strcmp(catdata[i].name, name) == 0 ){
            return false;//check for duplicate
        }
    }
    return true;

}