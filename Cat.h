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

    Cat(const char* newName, const Gender newGender, const Breed newBreed, const Weight newWeight);

    virtual ~Cat();
private:
    void clearData();
public://getters and setters
    Cat *next;

    char *getName();
    void setName(const char setName[]);
    Gender getGender() const;
    Breed getBreed() const;
    bool isFixed() const;
    void getWeight() const;

protected://Methods
public:
    void setWeight(Weight newWeight);
    void setGender(Gender setGender);

public://validate
     bool checkCatNum(NumCats currentcatnum);
     bool checkIndex(int index);
     bool checkWeight(Weight weight);
     bool checkName(const char* name[]);
public:
    bool print() const;
    bool validate();

};
