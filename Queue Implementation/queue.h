#ifndef QUEUE_H_
#define QUEUE_H_    

#include <iostream>
using namespace std;

class Queue{
public:
    Queue();

    void push(int num);
    void pop();
    int top();
    int getSize();
    void display();

private:
    struct Node{
        int data;
        Node *next=nullptr;
    };
    Node *head;
    int size=0;

};
#endif 