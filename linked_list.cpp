#include "linked_list.h"
#include <iostream>

LinkedList::LinkedList() {
    size_ = 0;
    head_ = nullptr;
}

LinkedList::~LinkedList() {
    for(int i = size_ - 1; i >= 0; i--) {
        remove(i);
    }
}

void LinkedList::print() {
    std::string printLL = "";
    Node* cur = head_;
    for(int i = 0; i < size_ - 1; i++) {
        printLL += cur->value_ + " ";
        cur = cur->next_;
    }
    printLL += cur->value_;
    std::cout << printLL << std::endl;
}

void LinkedList::insert(int index, int value) {
    Node* newNode = new Node(value);

    Node* cur = head_;
    Node* pre = head_;

    if(index <= size_ - 1) {
        for(int i = 0; i < index; i++) {
            cur = cur->next_;
        }

        if(cur == head_){
            newNode->next_ = head_;
            head_ = newNode;
        }else{
            if(cur == NULL){
                pre->next_ = newNode;
            }else{
                pre->next_ = newNode;
                newNode->next_ = cur;
            }
        }
        size_++;
    }
    return;
}

int LinkedList::get(int index) {
    Node* cur = head_;
    for(int i = 0; i < index; i++) {
        cur = cur->next_;
    }
    return cur->value_;
}

void LinkedList::remove(int index) {
    Node* cur = head_;
    Node* pre = head_;

    if(index <= size_ - 1) {
        for(int i = 0; i < index; i++) {
            if(cur != head_) {
                pre = pre->next_;
            }
            cur = cur->next_;
        }

        Node* tmp = cur->next_;
        if(pre == head_ && cur == head_) {
            head_ = tmp;
        }else {
            pre->next_ = tmp;
        }

        delete tmp;
        size_--;
    }
    return;
}