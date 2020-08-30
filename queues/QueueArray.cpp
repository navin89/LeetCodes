//
// Created by Navin Tamilchelvam on 8/30/20.
//

#include "QueueArray.h"

void QueueArray::enqueue(int x)
{
    if (rear==size-1)
        printf("QueueArray FULL!");
    else {
        rear++;
        Q[rear]=x;
    }
}

int QueueArray::dequeue()
{
    int x=-1;
    if (front==rear)
        printf("QueueArray is Empty\n");
    else {
        x=Q[front+1];
        front++;
    }
}

void QueueArray::Display()
{
    for (int i = front+1; i<=rear; i++)
        printf("%d ", Q[i]);
    printf("\n");


}