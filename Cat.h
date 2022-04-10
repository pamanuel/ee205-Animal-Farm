///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "catDatabase.h"

class Cat {
protected:
    char name[MAX_CAT_NAMES];
    enum Gender gender;
    enum Breed breed;
    bool isfixed;
    Weight weight;

public://constructor and deconstructor
    Cat();

    Cat(const char* newName, Gender newGender, Breed newBreed, Weight newWeight);

    virtual ~Cat();
private:
    void clearData();
public://getters and setters
    Cat *next;

    char *getName();
    void setName(const char setName[]);

    void fixCat()const;
    bool isFixed() const;

    void setWeight(Weight newWeight)const;
    void getWeight() const;

    Gender getGender() const;
    Breed getBreed() const;

protected://Methods
public:
    void setBreed(Breed Breed);
    void setGender(Gender newGender);

public://validate
     bool checkCatNum(NumCats currentcatnum);
     bool checkIndex(int index);
     bool checkWeight(Weight weight);
     bool checkName(const char* name[]);
public:
    bool print() const;
    bool validate();

};
