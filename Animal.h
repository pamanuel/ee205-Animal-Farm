///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   20_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Node.h"
#include <string>
#include "Gender.h"
#include "Weight.h"
class Animal;

class Animal: public Node{
public:
    static const std::string KINGDOM_NAME;
private:
    std::string species;
    std::string classification;
    Gender gender = Gender::UNKNOWN_GENDER;
    Weight weight;
public:///constructors///
    Animal(const Weight::t_weight newMaxWeight,
           const std::string &newClassification,
           const std::string &newSpecies);

    Animal(const Gender newGender,
           const Weight::t_weight newWeight,
           const Weight::t_weight newMaxWeight,
           const std::string &newClassification,
           const std::string &newSpecies);
public:///getters and setters///
    std::string getKingdom() const noexcept;
    std::string getClassification() const noexcept;
    std::string getSpecies() const noexcept;
    Gender getGender() const noexcept;
    Weight::t_weight getWeight()const noexcept;
    void setWeight(const Weight::t_weight newWeight);
public:///public methods///
    virtual std::string speak()const noexcept=0;
    void dump() const noexcept override;
    bool validate() const noexcept override;
    ////static public methods///
    static bool validateClassification(const std::string &checkClassification) noexcept;
    static bool validateSpecies(const std::string &checkSpecies) noexcept;
protected:///protected method///
    void setGender(const Gender newGender);
};
