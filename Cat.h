///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author @Patrick Manuel <@pamanuel@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "catDatabase.h"
#include "Weight.h"
#include "Gender.h"
#include "Color.h"
#include "Mammal.h"
class Cat: public Mammal{
public:
    static const std::string SPECIES_NAME;
    static const Weight::t_weight MAX_WEIGHT;
protected:
    std::string name;
    enum Gender gender;
    enum Color  breed;
    bool        isfixed;
    Weight      weight;

public:///constructor and destructor

    Cat(const Weight::t_weight newMaxWeight, const string &newSpecies, const string &newName);

    Cat(const Color newColor1, const Gender newGender1, Weight::t_weight newWeight1,
        const Weight::t_weight newMaxWeight, const string &newSpecies, const string &newName, const Color newColor,
        const bool newisFixed, const Gender newGender, const Weight::t_weight newWeight);


public:
///getters and setters
    std::string getName()const;
    void setName(const std::string& newName);

    void fixCat();
    bool isFixed() const;


public:
    void dump() const noexcept override;
    bool validate() const noexcept override;
    std::string speak() const noexcept override;
    static bool validateName(const std::string &newName);
};
