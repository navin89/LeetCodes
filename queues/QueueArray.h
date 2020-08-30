//
// Created by Navin Tamilchelvam on 8/30/20.
//

#ifndef LEETCODES_QUEUEARRAY_H
#define LEETCODES_QUEUEARRAY_H

#include <iostream>


class QueueArray
{
private:
    int front;
    int rear;
    int size;
    int *Q;

public:
    QueueArray() {
        front=rear=-1;
        size=10;
        Q=new int[size];
    }

    QueueArray(int size) {
        front=rear=-1;
        this->size=size;
        Q=new int[this->size];
    }

    void enqueue(int x);
    int dequeue();
    void Display();
};




#endif //LEETCODES_QUEUEARRAY_H
