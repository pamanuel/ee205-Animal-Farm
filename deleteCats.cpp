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


#include <iostream>
#include <cassert>
#include "deleteCats.h"
using namespace std;

bool deleteCat(Cat* deleteName){
    assert(deleteName != nullptr);
    assert(validateDatabase());
    if(deleteName == catDataheadptr){
        catDataheadptr = catDataheadptr->next;
        delete deleteName;
        currentcatnum--;
        assert(validateDatabase());
        return true;
    }

    Cat* pCat = catDataheadptr;
    while(pCat != nullptr){
        if (pCat->next == deleteName){
            pCat->next = deleteName->next;
            delete deleteName;
            assert(pCat->validate());
            currentcatnum --;
            return true;
        }
        pCat = pCat->next;
    }
    assert(validateDatabase());

}
bool deleteAllCats() {
    while(catDataheadptr != nullptr){
        delete(catDataheadptr);
    }
    cout << "All cats are deleted" << endl;
    return true;
}
