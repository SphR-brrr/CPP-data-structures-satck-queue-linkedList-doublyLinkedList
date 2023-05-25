#include "doublyLinkedList.h"
#include <iostream>
using namespace std;

// function description for doubly linked list

void DLL::addWithPlacement(int place, int newData) {
  if (place < 1 || place > listSize + 1) {
    cout << "Placement is invalid. \n";
    return;
  } else if (place == 1) {
    addFromHead(newData);
  } else if (place == listSize + 1) {
    addFromTail(newData);
  } else {
    addFromMid(place, newData);
  }
}

void DLL::addFromHead(int newData) {
  Node *newNode = new Node();
  newNode->data = newData;
  newNode->prev = nullptr;
  newNode->next = head;
  if (head != nullptr) {
    head->prev = newNode;
  } else {
    tail = newNode;
  }
  head = newNode;
  listSize++;
}

void DLL::addFromTail(int newData) {
  Node *newNode = new Node();
  newNode->data = newData;
  newNode->next = nullptr;
  newNode->prev = tail;
  if (tail != nullptr) {
    tail->next = newNode;
  } else {
    head = newNode;
  }
  tail = newNode;
  listSize++;
}

void DLL::addFromMid(int place, int newData) {
  Node *temp = head;
  Node *newNode = new Node();
  newNode->data = newData;
  for (int i = 0; i < place - 2; i++) {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
  newNode->prev = temp;
  newNode->next->prev = newNode;
  listSize++;
}

void DLL::removeNodePlacement(int targetPlace) {
  Node *temp;
  if (targetPlace < 1 || targetPlace > listSize) {
    cout << "Placement is invalid. \n";
    return;
  }

  if (targetPlace <= listSize / 2) {
    temp = head;
    for (int i = 0; i < targetPlace - 1; i++) {
      temp = temp->next;
    }
  } else {
    temp = tail;
    for (int i = 0; i < (listSize - targetPlace); i++) {
      temp = temp->prev;
    }
  }
  if (head == tail) {
    head = tail = nullptr;
  } else if (temp == head) {
    head = temp->next;
    head->prev = nullptr;
  } else if (temp == tail) {
    tail = temp->prev;
    tail->next = nullptr;
  } else {
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
  }
  delete temp;
  listSize--;
}

void DLL::findData(int targetData) {
  if (head == nullptr) {
    cout << "there are no nodes on this list.\n";
    return;
  } else {
    Node *temp = head;
    int counter = 1;
    while (counter <= listSize && temp->data != targetData) {
      temp = temp->next;
      counter++;
    }
    if (counter == listSize + 1) {
      cout << "data does not exist.\n";
    } else {
      cout << "this data is on node " << counter << "\n";
    }
  }
}

void DLL::coutList() {
  Node *currNode = head;
  cout << "[ ";
  while (currNode != nullptr) {
    cout << currNode->data << "\t";
    currNode = currNode->next;
  }
  cout << "] list size:" << listSize << "\n";
}
