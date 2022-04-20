///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Breed.cpp
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Breed.h"
#include "config.h"
enum class Breed {
    UNKNOWN_GENDER
    ,MALE
    ,FEMALE
};
/// Output Gender as a formatted string
///
/// @param lhs_stream The output stream to write to (usually `cout`). `
/// `lhs` stands for Left Hand Side and means the left side
/// of the `<<` operator.
/// @param rhs_Gender The Gender to output.
/// `rhs` stands for Right Hand Side and means the right
/// side of the `<<` operator.
/// @return `Unknown gender`, `Female` or `Male`.
inline std::ostream& operator<<( std::ostream& lhs_stream, const Breed& rhs_Breed ){
    switch( rhs_Breed ) {
        case Breed::UNKNOWN_GENDER:
            lhs_stream << "Unknown gender";
            break;
        case Breed::MALE:
            lhs_stream << "Male";
            break;
        case Breed::FEMALE:
            lhs_stream << "Female";
            break;
        default:
            /// @throw out_of_range If the enum is not mapped to a string.
            throw std::out_of_range( PROGRAM_NAME ": Gender not mapped to a string" );
    }
    return lhs_stream;
}