///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   20_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "List.h"
#include <iostream>

using namespace std;
bool List::empty() const noexcept {
    if (head == nullptr){
        return true;
    }
    return false;
}

unsigned int List::size() const noexcept {
    return count;
}

bool List::isIn(Node *aNode) const {
    Node* checkNode = head;
    while(checkNode != nullptr){
        if(checkNode == aNode){
            return true;
        }
        checkNode = checkNode->next;
    }
    return false;
}

bool List::isSorted() const noexcept {
    if(head == nullptr){
        return true;
    }
    for(Node* pNode = head; pNode->next != nullptr; pNode = pNode->next){
        if(pNode > pNode->next){
            return false;
        }
        return true;
    }
    return false;
}

Node *List::get_first() const noexcept {
    return head;
}

void List::deleteAllNodes() noexcept {
    while(head != nullptr){
        pop_front();
    }
}

Node *List::get_next(const Node *currentNode) {
    if (currentNode->next == nullptr){
        cout << "No next node" << endl;
    }
    return currentNode->next;
}
