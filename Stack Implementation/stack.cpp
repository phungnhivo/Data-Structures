#include "stack.h"

Stack::Stack()
{
    head=nullptr;
}

void Stack::push(int val)
{
    size++;
    Node *temp=new Node;
    temp->data=val;

    temp->next=head;
    head=temp;
   // delete temp;
    
}

void Stack::pop()
{

    if(!head){
        cout<<"Stack is empty"<<endl;
        return;
    }
    size--;
    head=head->next;
}

int Stack::top()
{   
    if(!head){
        cout<<"Stack is empty"<<endl;
        return 0;
    }
    return head->data;
}

int Stack::getSize()
{
    return size;
}

void Stack::display()
{
    if(!head){
        cout<<"Stack is empty"<<endl;
        return;
    }

    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
