///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Weight.h
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   19_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <string>

class Weight;

class Weight {
public: ////////////// Enumerations //////////////
    /// A unit of measure for weight
    enum UnitOfWeight { POUND, KILO, SLUG };
    typedef float t_weight;
    static const t_weight KILOS_IN_A_POUND ;
    static const t_weight SLUGS_IN_A_POUND ;
    static const t_weight UNKNOWN_WEIGHT;

    static const std::string POUND_LABEL ;
    static const std::string KILO_LABEL ;
    static const std::string SLUG_LABEL ;

private:
    bool     bIsKnown;
    bool     bHasMax;
    enum     UnitOfWeight unitOfWeight;
    t_weight weight;
    t_weight maxWeight;

public:///constructors///
    Weight() noexcept;
    Weight(t_weight newWeight);
    Weight(UnitOfWeight newUnitOfWeight) noexcept;
    Weight(t_weight newWeight, UnitOfWeight newUnitOfWeight);
    Weight(t_weight newWeight, t_weight newMaxWeight);
    Weight(UnitOfWeight newUnitOfWeight, t_weight newMaxWeight);
    Weight(t_weight newWeight, UnitOfWeight newUnitOfWeight, t_weight newMaxWeight);

public:///getters and setters///
    bool isWeightKnown() const noexcept;
    bool hasMaxWeight() const noexcept;
    float getWeight() const noexcept;
    float getWeight(UnitOfWeight weightUnits) const noexcept;
    float getMaxWeight() const noexcept;
    UnitOfWeight getWeightUnit() const noexcept;
    void setWeight(t_weight newWeight);
    void setWeight(t_weight newWeight, UnitOfWeight weightUnits);
private:///animals have a max weight///
    void setMaxWeight(float newMaxWeight);

public:///validation///
    bool isWeightValid(float checkWeight) const noexcept;
    bool validate() const noexcept;
    void dump() const noexcept;

public:///operators///
    bool operator==(const Weight &rhs_Weight) const;
    bool operator<(const Weight &rhs_Weight) const;
    Weight & operator+=(float rhs_addToWeight);
    static float fromKilogramToPound(t_weight kilogram) noexcept;
    static float fromPoundToKilogram(t_weight pound) noexcept;
    static float fromSlugToPound(t_weight slug) noexcept;
    static float fromPoundToSlug(t_weight pound) noexcept;
    static float convertWeight(t_weight fromWeight, UnitOfWeight fromUnit, UnitOfWeight toUnit) noexcept;
};
