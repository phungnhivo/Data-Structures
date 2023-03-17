#include<iostream>
#include "queue.h"

using namespace std;

int main(){

    Queue myqueue;
    myqueue.push(1);
    myqueue.push(2);
    myqueue.push(3);
    cout<<"Size of queue is "<<myqueue.getSize()<<endl;
    myqueue.display();
    myqueue.pop();
    cout<< myqueue.top()<<endl;
    myqueue.pop();
    cout<< myqueue.top()<<endl;
    myqueue.display();
    cout<<"Size of queue is "<<myqueue.getSize()<<endl;
   

    return 0;
}