#include "Queue.h"

int main() {
    // Створення черги з розміром 5
    Queue q(5);

    // Робота з чергою
    q.IsEmpty();
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Show();

    q.Dequeue();
    q.Show();

    q.Enqueue(40);
    q.Enqueue(50);
    q.Enqueue(60);
    q.Show();

    q.Enqueue(70); // Черга заповнена
    q.IsFull();
    q.Dequeue();
    q.Show();

    return 0;
}
