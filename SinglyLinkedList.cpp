///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.cpp
/// @version 1.0
///
/// @author @Patrick Manuel <pamanuel@hawaii.edu>
/// @date   20_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include <cassert>
#include <iomanip>
#include "SinglyLinkedList.h"
#include "config.h"
using namespace std;
SinglyLinkedList::SinglyLinkedList(){
    head = nullptr;
}

void SinglyLinkedList::push_front(Node *newNode) {
    if(head == nullptr){
        newNode = head;
        newNode->next = nullptr;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
}

Node *SinglyLinkedList::pop_front() noexcept {
    if(head == nullptr){
        return nullptr;
    }
    Node* newNode = head;
    head = head->next;
    newNode->next = nullptr;
    return newNode;
}

void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {
    assert(currentNode != nullptr);
    assert(newNode     != nullptr);
    newNode->next = currentNode->next;
    currentNode->next = newNode;
}

void SinglyLinkedList::dump() const noexcept {
    for(Node* pNode = head; pNode != nullptr; pNode = pNode->next){
        pNode->Node::dump();
    }
}

bool SinglyLinkedList::validate() const noexcept {
    if(head == nullptr){
        assert(count == 0);
    }
    for(Node* pNode = head; pNode != nullptr; pNode = pNode->next) {
        pNode->Node::validate();
    }
    return false;
}
