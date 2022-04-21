///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Color.h
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include <iostream>
#include "config.h"
enum class Color;
enum class Color {
    UNKNOWN_BREED
    ,WHITE
    ,RED
    ,BLUE
    ,GREEN
    ,PINK
};

inline std::ostream& operator<<( std::ostream& lhs_stream, const Color& rhs_Breed ){
    switch( rhs_Breed ) {
        case Color::UNKNOWN_BREED:
            lhs_stream << "Unknown breed";
            break;
        case Color::WHITE:
            lhs_stream << "Maine Coon";
            break;
        case Color::RED:
            lhs_stream << "Manx";
            break;
        case Color::BLUE:
            lhs_stream << "Shorthair";
            break;
        case Color::GREEN:
            lhs_stream << "Persian";
            break;
        case Color::PINK:
            lhs_stream << "PINK";
            break;
        default:
            /// @throw out_of_range If the enum is not mapped to a string.
            throw std::out_of_range( PROGRAM_NAME ": Breed not mapped to a string" );
    }
    return lhs_stream;
}