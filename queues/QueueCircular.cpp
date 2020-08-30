//
// Created by Navin Tamilchelvam on 8/30/20.
//

#include "QueueCircular.h"

void QueueCircular::enqueue(int x)
{

    if ((rear+1)%size == front)
        printf("Queue is FULL!\n");
    else {
        rear =(rear+1)%size;
        Q[rear] =x;
    }
}

int QueueCircular::dequeue()
{
    int x=-1;

    if(front == rear)
        printf("Queue is EMPTY!\n");
    else {
       front = (front+1)%size;
       x=Q[front];
    }
    return x;
}

void QueueCircular::Display()
{
    int i=front+1;
    do {
        printf("%d ", Q[i]);
        i=(i+1)%size;
    }while(i!=(rear+1)%size);

    printf("\n");
}

