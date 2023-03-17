#include "linkedlist.h"

LinkedList::LinkedList()
{
    head=nullptr;
}

void LinkedList::insert(int val)
{
    node * enter = new node;
    enter->data=val;
    if(!head){
        head=enter;
        return;
    }

    node *temp=head;
    while(temp->next != nullptr){
        temp=temp->next;
    }
    temp->next=enter;
}

void LinkedList::deleteNode(int val)
{
    if(!head){
        cout<<"List is empty!"<<endl;
        return;
    }
    node *temp1=head;
    if(temp1->data==val){
        head=head->next;
        delete temp1;
        return;
    }
    node *temp2=nullptr;
    while(temp1){
        if(temp1->data==val){
           temp2->next=temp1->next;
           delete temp1;
           return;
        }
        temp2=temp1;
        temp1=temp1->next;
    }
    cout<<"Number entered is not in linked list"<<endl;
}

void LinkedList::printList()
{
   if(!head){
    cout<<"List is empty!!"<<endl;
    return;
   }
    node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
