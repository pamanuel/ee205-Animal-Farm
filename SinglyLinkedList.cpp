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
#include <iostream>

#include "SinglyLinkedList.h"
#include "config.h"
using namespace std;

///construct SinglyLinkedList
SinglyLinkedList::SinglyLinkedList(){}

///Add node to front of linked list
void SinglyLinkedList::push_front(Node *newNode) {
    assert(validate());
    if(head != nullptr){
        newNode->next = head;
        head = newNode;
    }
    else{
        newNode->next = nullptr;
        head = newNode;
    }
    count++;
    assert(validate());

}
///delete first node in linked list
Node *SinglyLinkedList::pop_front() noexcept {
    assert(validate());
    if(head == nullptr){
        return nullptr;
    }
    Node* deleteNode = head;
    head = head->next;
    deleteNode->next = nullptr;
    count--;
    assert(validate());
    return deleteNode;
}
///insert new node after input node
void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {
    assert(validate());
    assert(newNode->validate());
    assert(isIn(currentNode));
    assert(!isIn(newNode));
    newNode->next = currentNode->next;
    currentNode->next = newNode;
    count++;
    assert(validate());
}

void SinglyLinkedList::dump() const noexcept {
    cout << "SinglyLinkedList:  head=["<< head <<"]" << endl;
    for(Node* pNode = head; pNode != nullptr; pNode = pNode->next){
        pNode->dump();
    }
}

bool SinglyLinkedList::validate() const noexcept {
    unsigned int counter = 0;
    for(Node* counterNode = head; counterNode != nullptr; counterNode = counterNode->next){
        counter++;
    }
    assert(counter == count);
    for(Node* pNode = head; pNode != nullptr; pNode = pNode->next) {
        pNode->Node::validate();
    }
    return true;
}
