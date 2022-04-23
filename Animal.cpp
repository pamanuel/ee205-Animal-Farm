///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   20_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include <iomanip>
#include <iostream>
#include <string>
#include <cassert>

#include "Animal.h"
#include "config.h"
#include "Gender.h"

using namespace std;
///constructors///
const string Animal::KINGDOM_NAME = "Animalia";
Animal::Animal(const Weight::t_weight newMaxWeight, const string &newClassification, const string &newSpecies):
        Node(), weight(newMaxWeight){
    if(validateClassification(newClassification)&& validateSpecies(newSpecies)){
        classification = newClassification;
        species = newSpecies;
        Animal::validate();
    }
    else{
        throw invalid_argument("You have an empty input.");
    }
}

Animal::Animal(const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight,
               const string &newClassification, const string &newSpecies):Node(), weight(newWeight, newMaxWeight) {
    if(validateClassification(newClassification)&& validateSpecies(newSpecies)){
        gender = newGender;
        weight.setWeight(newWeight);
        classification = newClassification;
        species = newSpecies;
        Animal::validate();
    }
    else{
        throw invalid_argument("You have an empty input.");
    }
}
///getters and setters///
std::string Animal::getClassification() const noexcept {
    return classification;
}

std::string Animal::getKingdom() const noexcept {
    return KINGDOM_NAME;
}

std::string Animal::getSpecies() const noexcept {
    return species;
}

Gender Animal::getGender() const noexcept{
    return gender;
}

Weight::t_weight Animal::getWeight() const noexcept {
    return weight.getWeight();
}

void Animal::setWeight(const Weight::t_weight newWeight) {
    weight = newWeight;
}
///public methods
void Animal::dump() const noexcept {
    Node::dump();
    FORMAT_LINE_FOR_DUMP("Animal", "this") << this << endl;
    FORMAT_LINE_FOR_DUMP("Animal", "Kingdom") << getKingdom() << endl;
    FORMAT_LINE_FOR_DUMP("Animal", "Classification") << getClassification() << endl;
    FORMAT_LINE_FOR_DUMP("Animal", "Species") << getSpecies() << endl;
    FORMAT_LINE_FOR_DUMP("Animal", "Gender") << getGender() << endl;
    FORMAT_LINE_FOR_DUMP("Animal", "Weight") << getWeight() << endl;
}

bool Animal::validate() const noexcept {
    assert(validateSpecies(getSpecies()));
    assert(validateClassification(getClassification()));
    assert(weight.validate());
    return true;
}

bool Animal::validateClassification(const string &checkClassification) noexcept {
    assert(checkClassification.empty());
    return true;
}

bool Animal::validateSpecies(const string &checkSpecies) noexcept {
    assert(checkSpecies.empty());
    return true;
}
///protected method
void Animal::setGender(const Gender newGender) {
    if(gender == Gender::UNKNOWN_GENDER){
        gender = newGender;
    }
    else{
        throw invalid_argument("Already has a set gender");
    }
}
