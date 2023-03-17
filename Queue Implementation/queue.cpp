#include "queue.h"

Queue::Queue()
{
    head=nullptr;
}

void Queue::push(int num)
{
    size++;
    Node *enter=new Node;
    enter->data=num;
    if(!head){
        head=enter;
        return;
    }

    Node *temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=enter;
}

void Queue::pop()
{
    if(!head){
        cout<<"Nothing in queue"<<endl;
        return;
    }
    size--;
    head=head->next;
}

int Queue::top()
{
    if(!head){
        cout<<"Nothing in queue"<<endl;
        return 0;
    }
    return head->data;
}

int Queue::getSize()
{
    return size;
}

void Queue::display()
{
    if(!head){
        cout<<"Nothing in queue"<<endl;
        return;
    }
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
