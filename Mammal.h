///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Mammal.h
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   20_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include "Animal.h"
#include "Node.h"
#include "Gender.h"
#include "Weight.h"
#include "Breed.h"
#include "Color.h"

class Mammal;
class Mammal: public Animal{
public:
    static const std::string MAMMAL_NAME;
protected:
    Color color = Color::UNKNOWN_COLOR;

public:
    Mammal(const Weight::t_weight newMaxWeight,
           const std::string &newSpecies):
           Animal(newMaxWeight, MAMMAL_NAME, newSpecies){};

    Mammal(const Color newColor,
           const Gender newGender,
           Weight::t_weight newWeight,
           const Weight::t_weight newMaxWeight,
           const std::string &newSpecies):
           Animal(newGender, newWeight, newMaxWeight, MAMMAL_NAME,newSpecies){
           setColor(newColor);
    };
public:
    Color getColor() const noexcept;
    void setColor(const Color newColor) noexcept;
    void dump() const noexcept override;
};
