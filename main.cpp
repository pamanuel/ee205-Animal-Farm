#include <iostream>

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h> // For EXIT_SUCCESS / EXIT_FAILURE
#include <assert.h> // For assert()

#include "config.h"
#include "catDatabase.h"
#include "addCats.h"
#include "reportCats.h"
#include "updateCats.h"
#include "deleteCats.h"

#define MAX_NAME1 "1234567890123456789012345678901234567890123456789"
#define MAX_NAME2 "DIFFERENT 123456789012345678901234567890123456789"
#define ILLEGAL_NAME "12345678901234567890123456789012345678901234567890"

    int main() {
        printf( "Starting %s\n", PROGRAM_NAME ) ;

        addCat( "Loki",  MALE,           PERSIAN,    true,  8.5,  BLACK, WHITE, 101 ) ;
        addCat( "Milo",  MALE, 	  MANX,       true,  7.0,  BLACK, RED,   102 ) ;
        addCat( "Bella", FEMALE, 	  MAINE_COON, true,  18.2, BLACK, BLUE,  103 ) ;
        addCat( "Kali",  FEMALE, 	  SHORTHAIR,  false, 9.2,  BLACK, GREEN, 104 ) ;
        addCat( "Trin",  FEMALE, 	  MANX,       true,  12.2, BLACK, PINK,  105 ) ;
        addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR,  false, 19.0, WHITE, BLACK, 106 ) ;
//	printAllCats();
//	printf("\n");

// Test for empty name
//	assert( addCat( " "         , UNKNOWN_GENDER, SHORTHAIR, false, 19.0, BLACK, WHITE, 101 ) == false ) ; //valid
// Test for max name
//	assert( addCat( MAX_NAME1   , UNKNOWN_GENDER, SHORTHAIR, false, 19.0, WHITE, RED,   107 ) == false ) ; //valid
// Test for name too long
//	assert( addCat( ILLEGAL_NAME, UNKNOWN_GENDER, SHORTHAIR, false, 19.0, WHITE, BLUE,  108 ) == false ) ; //not valid
// Test for duplicate cat name
//	assert( addCat( "Chili"     , UNKNOWN_GENDER, SHORTHAIR, false, 0,    WHITE, GREEN, 109 ) == false ) ; //doesn't print chili but no segfault
// Test for weight <= 0
//	assert( addCat( "Neo"       , UNKNOWN_GENDER, SHORTHAIR, false, 0,    WHITE, PINK,  110 ) == false ) ; // valid

// Test for printCat( -1 ) ;
//	printCat( -1 ) ; //still prints don't know why
// Test for out of bounds
//	printCat( 2000 ) ; //segfaults no error message

// Test finding a cat...
//	assert( findCat( "Bella" ) == 2 ) ; //no segfault
// Test not finding a cat
//	assert( findCat( "Bella's not here" ) == false ) ;//no segfault

// Test addCat details
        addCat( "Oscar", UNKNOWN_GENDER, SHORTHAIR, false, 1.1, RED, BLACK, 111 ) ;
        int testCat = findCat("Oscar");

// Test setting a large name
//	assert( updateCatName( testCat, MAX_NAME2 ) == false ) ;//valid
//	printCat( testCat ) ;
//	printf("\n");
// Test setting an out-of-bounds name
        assert( updateCatName( testCat, ILLEGAL_NAME ) == false ) ; //doesn't change name but also doesnt segfault
//	printCat( testCat ) ;
//	printf("\n");
// Test setting an illegal cat weight
//	assert( updateCatWeight( testCat, -1 ) == false ) ; //prints error but doesnt segfault

//	printAllCats() ;
        int kali = findCat( "Kali" ) ;
//	assert( updateCatName( kali, "Chili" ) == false ) ; // //doesn't change name but also doesnt segfault
//	assert( updateCatName( kali, "Capulet" ) == true ) ;
//	assert( updateCatWeight( kali, 9.9 ) == true ) ;
//	assert( fixCat( kali ) == true ) ;
//	assert( updateCatCollar1( kali, GREEN ) == true ) ;
//	assert( updateCatCollar2( kali, GREEN ) == true ) ;
//	assert( updatelicense( kali, 201 ) == true ) ;

        printCat( kali ) ;
        printf("\n");
        printAllCats() ;
//	printf("\n");
	deleteAllCats() ;
//	printf("\n");
	printAllCats() ;
//	printf("\n");
//	printf( "Done with %s\n", PROGRAM_NAME ) ;

        return( EXIT_SUCCESS ) ;
}
