#ifndef STACK_H_
#define STACK_H_

#include <iostream>
using namespace std;

class Stack{
public:
    Stack();

    void push(int val);
    void pop();
    int top();
    int getSize();
    void display();

private:
    struct Node{
        int data;
        Node *next=nullptr;
    };
    Node* head;

    int size=0;

};
#endif