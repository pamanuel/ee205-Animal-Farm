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

#include <stdio.h>
#include <string.h>

#include "config.h"
#include "reportCats.h"
#include "stringCat.h"

bool printCat( int index ){
    if ( checkIndex(index) == false ){
        fprintf( stderr, "%s: Check cat Index [%d] in the database.\n", PROGRAM_NAME, index ) ;
        return false;
    }
    printf("cat index = [%d] name=[%s] gender=[%s] breed=[%s] isFixed=[%d] weight=[%f] collarcolor1=[%s] collarcolor2=[%s] license=[%llu] \n",
           index,
           catdata[index].name,
           genlis(catdata[index].gender),
           breedlis(catdata[index].breed),
           catdata[index].isfixed,
           catdata[index].weight,
           colorlis(catdata[index].collarcolor1),
           colorlis(catdata[index].collarcolor2),
           catdata[index].license);
    return true;
}
void printAllCats( ){
    for ( int i = 0 ; i  < currentcatnum ; i++){
        printf("cat index = [%d] name=[%s] gender=[%s] breed=[%s] isFixed=[%d] weight=[%f] collarcolor1=[%s] collarcolor2=[%s] license=[%llu] \n",
               i,
               catdata[i].name,
               genlis(catdata[i].gender),
               breedlis(catdata[i].breed),
               catdata[i].isfixed,
               catdata[i].weight,
               colorlis(catdata[i].collarcolor1),
               colorlis(catdata[i].collarcolor2),
               catdata[i].license);
    }
}

int findCat(char name[MAX_CAT_NAMES]){
    for (int i = 0; i < MAX_CAT; i++){
        if ( strcmp(catdata[i].name, name) == 0 ) {
            return i;
            break;
        }
    }
    return 0;
}