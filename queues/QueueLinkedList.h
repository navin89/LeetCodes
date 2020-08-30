//
// Created by Navin Tamilchelvam on 8/30/20.
//

#ifndef LEETCODES_QUEUELINKEDLIST_H
#define LEETCODES_QUEUELINKEDLIST_H

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};



class QueueLinkedList{
private:
    Node* front;
    Node* rear;
public:
    QueueLinkedList();
    ~QueueLinkedList();

    void enqueue(int x);
    int dequeue();
    bool isEmpty();
    void display();
};


#endif //LEETCODES_QUEUELINKEDLIST_H
