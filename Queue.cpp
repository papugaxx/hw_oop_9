#include "Queue.h"

Queue::Queue(int queueSize) {
    size = queueSize;
    queueArray = new int[size]; 
    count = 0;               
}

Queue::~Queue() {
    delete[] queueArray; 
}

bool Queue::IsEmpty() const {
    if (queueArray[0] == -1) {
        return true;
    }
    return false;
}

bool Queue::IsFull() const {
    if (count == size) {
        return true;
        cout << true;
    }
    return false;
    cout << false;
}

void Queue::Enqueue(int value) {
    queueArray[count] = value;
    count++;
}

void Queue::Dequeue() {
    
    for (int i = 0; i < count - 1; i++) {
        queueArray[i] = queueArray[i + 1];
    }

    queueArray[count - 1] = -1;
    count--;
}

void Queue::Show() const {
    cout << "Queue";
    for (int i = 0; i < count; i++) {
        cout << queueArray[i] << " ";
    }
    cout << endl;
}
