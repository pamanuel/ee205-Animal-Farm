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

class Cat{
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
    Cat();

    Cat(const std::string& newName, Gender newGender, Color newBreed, Weight newWeight);

    virtual ~Cat();

private:
    void clearData();///zero database
public:
    Cat *next{};///public variable

///getters and setters
    std::string getName()const;
    void setName(const std::string& newName);

    void fixCat();
    bool isFixed() const;

    void setWeight(Weight newWeight);
    Weight getWeight() const;

    Gender getGender() const;
    Color getBreed() const;

protected:///Methods
public:///breed and gender can't be changed
    void setBreed(Color newBreed);
    void setGender(Gender newGender);

public:
    bool print() const noexcept;
    bool validate() const noexcept;

};
