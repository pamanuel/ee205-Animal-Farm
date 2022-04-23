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
    Breed color = Breed::UNKNOWN_COLOR;

public:
    Mammal(const Weight::t_weight newMaxWeight,
           const std::string &newSpecies);
    Mammal(const Breed newColor, const Gender newGender, Weight::t_weight newWeight,
           const Weight::t_weight newMaxWeight,
           const std::string &newSpecies);
public:
    Breed getColor() const noexcept;
    void setColor(const Breed newColor) noexcept;
    void dump() const noexcept override;
};
