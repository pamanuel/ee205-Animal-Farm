///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author @Patrick Manuel <@pamanuel@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////



#include <cassert>
#include <iostream>
#include "config.h"
#include "addCats.h"
using namespace std;

bool addCat(Cat* newCat){
    if(!checkCatNum(currentcatnum)){///check size of number of cats in database
        cout << "CatDatabase is full" << endl;
        return false;
    }
    else{
        assert(newCat != nullptr);
        newCat -> validate();///validate newCat
        assert(validateDatabase());///make sure database is okay

        newCat->next = catDataheadptr;
        catDataheadptr = newCat;
        currentcatnum++;

        newCat->validate();


        return true;
    }
}