#include <iostream>
#include "stack.h"

using namespace std;

int main(){

    Stack mystack;
    mystack.push(1);
    mystack.push(2);
    mystack.push(3);
    mystack.push(4);
    cout<<"Stack size is "<<mystack.getSize()<<endl;
    cout<<"Top of stack is "<<mystack.top()<<endl;
    mystack.pop();
    mystack.display();
    return 0;
}