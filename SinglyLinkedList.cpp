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
#include <iostream>

#include "SinglyLinkedList.h"
#include "config.h"
using namespace std;

///construct SinglyLinkedList
SinglyLinkedList::SinglyLinkedList(){
    assert(SinglyLinkedList::validate());
}
///Add node to front of linked list
void SinglyLinkedList::push_front(Node *newNode) {
    assert(newNode->validate());
    if(head == nullptr){
        newNode = head;
        newNode->next = nullptr;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
    count++;
}
///delete first node in linked list
Node *SinglyLinkedList::pop_front() noexcept {
    if(head == nullptr){
        return nullptr;
    }
    Node* newNode = head;
    head = head->next;
    newNode->next = nullptr;
    count--;
    return newNode;
}
///insert new node after input node
void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {
    assert(currentNode != nullptr);
    assert(newNode     != nullptr);
    newNode->next = currentNode->next;
    currentNode->next = newNode;
    count++;
}

void SinglyLinkedList::dump() const noexcept {
    cout << "SinglyLinkedList:  head=["<< head <<"]" << endl;
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
