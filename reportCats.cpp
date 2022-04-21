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

#include <cassert>
#include <iostream>
#include "config.h"
#include "reportCats.h"

using namespace std;

bool printAllCats( ) {
    assert(validateDatabase());
    if (catDataheadptr == nullptr) {
        fprintf(stderr,"%s: No cats in database",PROGRAM_NAME);
    } else {
        for (Cat *pCat = catDataheadptr; pCat != nullptr; pCat = pCat->next) {
            pCat->print();
        }
        assert(validateDatabase());
        cout << "All cats printed" << endl;
    }
    return true;
}

Cat* findCat(const string& name){
    assert(validateDatabase());
    for (Cat* pCat = catDataheadptr; pCat != nullptr; pCat = pCat->next){
        if ((name.compare(pCat->getName())) == 0 ) {
            return pCat;
        }
    }
    return nullptr;
}