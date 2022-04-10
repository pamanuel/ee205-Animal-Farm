///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author @Patrick Manuel <@pamanuel@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <cassert>
#include "catDatabase.h"
#include "config.h"


NumCats currentcatnum = 0;
Cat* catDataheadptr = nullptr;

bool checkCatNum( NumCats currentcatnum ){
    if (currentcatnum > MAX_CAT) {
        return false;//check size of array
    }
    return true;

}
bool checkWeight( const Weight weight ){
    if (weight <= 0){
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
    return true;
}
bool validateDatabase(){
    Cat* pCat = catDataheadptr;
    while(pCat != nullptr){
        assert(pCat->validate());///validate each cat
        pCat = pCat->next;
    }
    return true;
}

