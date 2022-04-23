///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Node.cpp
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <iomanip>
#include "Node.h"
#include "config.h"
using namespace std;

bool Node::compareByAddress(const Node* node1, const Node* node2) {
    if(node1 > node2){
        return true;
    }
    return false;
}

void Node::dump() const {
    FORMAT_LINE_FOR_DUMP("Node", "this") << this << endl;
    FORMAT_LINE_FOR_DUMP("Node", "next") << next << endl;
}

bool Node::validate() const noexcept {
    if(next == nullptr){
        return true;///nullptr is a valid value for next ptr
    }
    if(next == next->next){
        cout << "next pointer refers back to itself" << endl;
        return false;
    }
    return true;
}

bool Node::operator>(const Node &rightSide) {
    return compareByAddress(this, &(Node&)rightSide);
}