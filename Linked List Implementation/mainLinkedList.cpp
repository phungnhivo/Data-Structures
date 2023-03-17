#include <iostream>
#include "linkedlist.h"

using namespace std;

int main(){

    LinkedList link;
    link.printList();
    link.insert(1);
    link.insert(2);
    link.insert(3);
    link.insert(4);
    link.printList();
    link.deleteNode(3);
    link.deleteNode(1);
    link.printList();

    return 0;
};