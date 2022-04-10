///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author @Patrick Manuel <@pamanuel@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#include <cstring>
#include <cassert>
#include <iostream>
#include "config.h"
#include "reportCats.h"
#include "stringCat.h"

using namespace std;
bool printAllCats( ){
    assert(validateDatabase());
    for ( Cat* pCat = catDataheadptr ; pCat != nullptr ; pCat = pCat->next){
        pCat->print();
    }
    assert(validateDatabase());
    cout << "All cats printed" << endl;
    return true;
}

Cat* findCat(char name[MAX_CAT_NAMES]){
    assert(validateDatabase());
    for (Cat* pCat = catDataheadptr; pCat != nullptr; pCat = pCat->next){
        if ( strcmp(pCat->getName(), name) == 0 ) {
            return pCat;
        }
    }
    return nullptr;
}