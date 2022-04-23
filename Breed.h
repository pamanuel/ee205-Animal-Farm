///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Breed.h
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include <iostream>
#include "config.h"
enum class Breed{
    UNKNOWN_BREED
    ,MAINE_COON
    ,MANX
    ,SHORTHAIR
    ,PERSIAN
    ,SPHYNX
};

inline std::ostream& operator<<( std::ostream& lhs_stream, const Breed& rhs_Breed ){
    switch( rhs_Breed ) {
        case Breed::UNKNOWN_BREED:
            lhs_stream << "Unknown breed";
            break;
        case Breed::MAINE_COON:
            lhs_stream << "Maine Coon";
            break;
        case Breed::MANX:
            lhs_stream << "Manx";
            break;
        case Breed::SHORTHAIR:
            lhs_stream << "Shorthair";
            break;
        case Breed::PERSIAN:
            lhs_stream << "Persian";
            break;
        case Breed::SPHYNX:
            lhs_stream << "Sphynx";
            break;
        default:
            /// @throw out_of_range If the enum is not mapped to a string.
            throw std::out_of_range( PROGRAM_NAME ": Breed not mapped to a string" );
    }
    return lhs_stream;
}