///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.h
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   20_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "List.h"
#include "Node.h"
class SinglyLinkedList;

class SinglyLinkedList: public List{
    friend class Node;
public:
    SinglyLinkedList();
    void push_front(Node *newNode);
    Node * pop_front() noexcept override;
    static void insert_after(Node *currentNode, Node *newNode);
    void dump() const noexcept override;
    bool validate() const noexcept override;
};
