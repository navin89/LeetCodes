//
// Created by Navin Tamilchelvam on 8/30/20.
//

#ifndef LEETCODES_QUEUECIRCULAR_H
#define LEETCODES_QUEUECIRCULAR_H

#include <iostream>

class QueueCircular {

private:
    int front;
    int rear;
    int size;
    int *Q;

public:
    QueueCircular() {
        front=rear=0;
        size=10;
        Q=new int[size];
    }

    QueueCircular(int size) {
        front=rear=0;
        this->size=size;
        Q=new int[this->size];
    }

    void enqueue(int x);
    int dequeue();
    void Display();

};


#endif //LEETCODES_QUEUECIRCULAR_H
