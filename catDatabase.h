///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author @Patrick Manuel <@pamanuel@hawaii.edu>
/// @date   18_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#define MAX_CAT       (1024)
#define MAX_CAT_NAMES (50)

#include <cstdio>
#include <cstring>
#include <string>
#include "Cat.h"


typedef int NumCats;
typedef float Weight;

class Cat;
extern int currentcatnum;
extern Cat* catDataheadptr ;

extern bool checkCatNum(NumCats currentcatnum);
extern bool checkWeight(Weight weight);
extern bool checkName(std::string name);
extern bool validateDatabase();