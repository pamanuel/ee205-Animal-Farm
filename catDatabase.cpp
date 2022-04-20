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
#include <string>

using namespace std;

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
bool checkName( string name ){
    if (name.length() <= 0){
        fprintf(stderr,"%s: No name entered",PROGRAM_NAME);
        return false;
    }
    if (name.length() >= MAX_CAT_NAMES){
        fprintf(stderr,"%s: Name too long",PROGRAM_NAME);
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

