
#include <cstdio>
#include <cstdlib>
#include "Node.h"
#include <iostream>
using namespace std;

#ifndef LEETCODES_QUEUE_H
#define LEETCODES_QUEUE_H



class Queue
{
private:
    int size;
    int front;
    int rear;
    Node** Q;  // [Node*]*: Pointer to [Pointer to Node]

public:
    Queue(int size);
    ~Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(Node* x);
    Node* dequeue();
};

#endif //LEETCODES_QUEUE_H
