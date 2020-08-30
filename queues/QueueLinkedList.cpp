//
// Created by Navin Tamilchelvam on 8/30/20.
//

#include "QueueLinkedList.h"


QueueLinkedList::QueueLinkedList() {
    front = nullptr;
    rear = nullptr;
}

void QueueLinkedList::enqueue(int x) {
    Node* t = new Node;
    if (t == nullptr){
        cout << "Queue Overflow" << endl;
    } else {
        t->data = x;
        t->next = nullptr;
        if (front == nullptr){
            front = t;
            rear = t;
        } else {
            rear->next = t;
            rear = t;
        }
    }
}

int QueueLinkedList::dequeue() {
    int x = -1;
    Node* p;
    if (isEmpty()){
        cout << "Queue Underflow" << endl;
    } else {
        p = front;
        front = front->next;
        x = p->data;
        delete p;
    }
    return x;
}

bool QueueLinkedList::isEmpty() {
    if (front == nullptr){
        return true;
    }
    return false;
}

QueueLinkedList::~QueueLinkedList() {
    Node* p = front;
    while (front){
        front = front->next;
        delete p;
        p = front;
    }
}

void QueueLinkedList::display() {
    Node* p = front;
    while (p){
        cout << p->data << flush;
        p = p->next;
        if (p != nullptr){
            cout << " <- " << flush;
        }
    }
    cout << endl;
}