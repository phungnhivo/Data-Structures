#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <iostream>
using namespace std;

class LinkedList{
public:
    LinkedList();

    void insert(int val);
    void deleteNode(int val);
    void printList();

private:
    struct node{
        int data;
        node *next=nullptr;
    };
    node *head;

};
#endif