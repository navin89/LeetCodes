
#include "Queue.h"

Queue::Queue(int size) {
    this->size = size;
    front = -1;
    rear = -1;
    Q = new Node* [size];
}

Queue::~Queue() {
    delete [] Q;
}

bool Queue::isEmpty() {
    if (front == rear){
        return true;
    }
    return false;
}

bool Queue::isFull() {
    if (rear == size-1){
        return true;
    }
    return false;
}

void Queue::enqueue(Node* x) {
    if (isFull()){
        cout << "Queue Overflow" << endl;
    } else {
        rear++;
        Q[rear] = x;
    }
}

Node* Queue::dequeue() {
    Node* x = nullptr;
    if (isEmpty()){
        cout << "Queue Underflow" << endl;
    } else {
        front++;
        x = Q[front];
    }
    return x;
}
