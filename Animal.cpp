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

#include "Animal.h"

Animal::Animal(const Weight::t_weight newMaxWeight, const string &newClassification, const string &newSpecies) {
    classification = newClassification;
    species = newSpecies;

}

Animal::Animal(const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight,
               const string &newClassification, const string &newSpecies) {
    gender = newGender;
    weight = newWeight;
    classification = newClassification;
    species = newSpecies;
}

std::string Animal::getClassification() const noexcept {
    return classification;
}

std::string Animal::getKingdom() const noexcept {
    return KINGDOM_NAME;
}

std::string Animal::getSpecies() const noexcept {
    return species;
}

Gender Animal::getGender() {
    return gender;
}

Weight::t_weight Animal::getWeight() const noexcept {
    return 0.0;
}

void Animal::setWeight(const Weight::t_weight newWeight) {
    weight = newWeight;
}

void Animal::dump() const noexcept {
    Node::dump();
}

bool Animal::validate() const noexcept {
    return Node::validate();
}

bool Animal::validateClassification(const string &checkClassification) noexcept {
    return false;
}

bool Animal::validateSpecies(const string &checkSpecies) noexcept {
    return false;
}

void Animal::setGender(const Gender newGender) {
    if(gender == Gender::UNKNOWN_GENDER){
        gender = newGender;
    }
    else{
        cout << "Can't change a gender" << endl;
    }
}
