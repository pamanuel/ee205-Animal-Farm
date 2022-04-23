///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   20_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include "List.h"
#include "SinglyLinkedList.h"
class Node;

class Node{///friends to access protected members///
    friend class List;
    friend class SinglyLinkedList;
protected:
    Node* next = nullptr;///protected member///
    static bool compareByAddress(const Node* node1, const Node* node2);///protected method///

public:///public methods///
    virtual void dump() const;
    virtual bool validate() const noexcept;
    virtual bool operator>(const Node &rightSide);
};

