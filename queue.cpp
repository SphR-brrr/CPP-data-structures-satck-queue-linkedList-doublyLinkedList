#include "queue.h"
#include <iostream>
using namespace std;

// Queue function description

bool Queue::isEmpty() { return (front == -1); } // if statement

bool Queue::isFull() { return (rear == 99); }

void Queue::enqueue(int newData) {
  if (isFull()) {
    cout << "Queue overflow\n";
    return;
  }
  if (isEmpty()) {
    front = 0;
  }
  arr[++rear] = newData;
}

void Queue::dequeue() {
  if (isEmpty()) {
    cout << "Queue underflow\n";
    return;
  }
  if (front == rear) {
    front = -1;
    rear = -1;
  } else {
    front++;
  }
}

void Queue::peek() {
  if (isEmpty()) {
    cout << "Queue is empty\n";
    return;
  }
  cout << "The element on the front of queue is: " << arr[front] << "\n";
}