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

class Cat {
protected:
    char name[MAX_CAT_NAMES];
    enum Gender gender;
    enum Breed breed;
    bool isfixed;
    Weight weight;

public:///constructor and destructor
    Cat();

    Cat(const char* newName, const Gender newGender, const Breed newBreed, const Weight newWeight);

    virtual ~Cat();

private:
    void clearData();
public:///getters and setters
    Cat *next;


    const char* getName()const;
    void setName(const char newName[]);

    void fixCat();
    bool isFixed() const;

    void setWeight(Weight newWeight);
    Weight getWeight() const;

    Gender getGender() const;
    Breed getBreed() const;

protected:///Methods
public:
    void setBreed(Breed newBreed);
    void setGender(Gender newGender);

public:
    bool print() const noexcept;
    bool validate() const noexcept;

};
