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
enum Gender { UNKNOWN_GENDER, MALE, FEMALE };
enum Breed { UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX };
typedef float Weight;

class Cat{
protected:
    std::string name;
    enum Gender gender;
    enum Breed  breed;
    bool        isfixed;
    Weight      weight;

public:///constructor and destructor
    Cat();

    Cat(const std::string& newName, Gender newGender, Breed newBreed, Weight newWeight);

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
    Breed getBreed() const;

protected:///Methods
public:///breed and gender can't be changed
    void setBreed(Breed newBreed);
    void setGender(Gender newGender);

public:
    bool print() const noexcept;
    bool validate() const noexcept;

};
