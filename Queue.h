#pragma once
#include <iostream>
using namespace std;

class Queue {
private:
    int* queueArray; 
    int size;        
    int count;      

public:
    Queue(int queueSize);
    ~Queue();
    bool IsEmpty() const;
    bool IsFull() const;
    void Enqueue(int value);
    void Dequeue();
    void Show() const;
};


