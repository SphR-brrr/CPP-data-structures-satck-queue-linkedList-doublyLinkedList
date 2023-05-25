#include "stack.h"
#include <iostream>
using namespace std;

// stack function description

bool Stack::isEmpty() { return (top == -1); } // if statement

bool Stack::isFull() { return (top == 99); }

void Stack::push(int newData) {
  if (isFull()) {
    cout << "Stack overflow\n";
    return;
  }
  arr[++top] = newData;
}

void Stack::pop() {
  if (isEmpty()) {
    cout << "Stack underflow\n";
    return;
  }
  top--;
}

void Stack::peek() {
  if (isEmpty()) {
    cout << "Stack is empty\n";
    return;
  }
  cout << "the top element in stack is: " << arr[top] << "\n";
}