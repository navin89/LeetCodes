//
// Created by Navin Tamilchelvam on 8/30/20.
//

#include "QueueArray.h"
#include "QueueCircular.h"
#include "QueueLinkedList.h"

int main() {

    int A[] = {1, 3, 5, 7, 9};

    QueueLinkedList q;

    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        q.enqueue(A[i]);
    }

    q.display();

    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        q.dequeue();
    }
    q.dequeue();

    return 0;

}