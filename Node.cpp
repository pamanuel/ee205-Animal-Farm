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

#include "Node.h"
#include <iostream>
#include <iomanip>
using namespace std;

#define PRINT_HEADING_FOR_DUMP \
 /* Print =========================================================== */ \
 std::cout << std::setw(80) << std::setfill( '=' ) << "" << std::endl
/// Format a line for dumping the members of a class to the console.
/// Setup the fields for printing (space pad, left justify, etc.)
#define FORMAT_LINE_FOR_DUMP( className, member ) \
 std::cout << std::setfill( ' ' ) /* Space pad */ \
 << std::left /* Left justify */ \
 << std::boolalpha /* Print `true` or `false` for `bool`s */ \
 << std::setw(8) << (className) \
 << std::setw(20) << (member) \
 << std::setw(52) /* (data) */

bool Node::compareByAddress(const Node *node1, const Node *node2) {
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
    return compareByAddress(this, &rightSide);
}