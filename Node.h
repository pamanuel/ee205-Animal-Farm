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
#include "List.h"
#include "SinglyLinkedList.h"
class Node;

class Node{
    friend class List;
    friend class SinglyLinkedList;
protected:
    Node* next = nullptr;
    static bool compareByAddress(const Node *node1, const Node node2);

public:
    virtual void dump()const;
    virtual bool validate() const noexcept;
    virtual bool operator>(const Node &rightSide);
};

bool Node::compareByAddress(const Node *node1, const Node node2) {
    return false;
}

void Node::dump() const {

}

bool Node::validate() const noexcept {
    return false;
}

bool Node::operator>(const Node &rightSide) {
    return false;
}
