#include "singlyLinkedList.h"
#include <iostream>
using namespace std;

// function description for singly linked list

void SLL::addWithPlacement(int newData, int place) {
  if (place < 1 || place > listSize + 1) {
    cout << "Placement is invalid. \n";
    return;
  }
  if (place == 1) {
    addFromHead(newData);
  } else if (place == listSize + 1) {
    addFromTail(newData);
  } else {
    addFromMid(newData, place);
  }
}

void SLL::addFromHead(int newData) {
  Node *newNode = new Node();
  newNode->data = newData;
  newNode->next = head;
  head = newNode;
  listSize++;
}

void SLL::addFromTail(int newData) {
  Node *newNode = new Node();
  newNode->data = newData;
  newNode->next = nullptr;
  if (head == nullptr) {
    head = newNode;
  } else {
    Node *temp = head;
    while (temp->next != nullptr) {
      temp = temp->next;
    }
    temp->next = newNode;
  }
  listSize++;
}

void SLL::addFromMid(int newData, int place) {
  Node *temp = head;
  Node *newNode = new Node();
  newNode->data = newData;
  for (int i = 0; i < place - 2; i++) {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
  listSize++;
}

void SLL::removeNodePlacement(int place) {
  Node *temp = head;
  Node *previous = nullptr;
  if (place < 1 || place > listSize) {
    cout << "Placement is invalid. \n";
    return;
  }
  for (int i = 0; i < place - 1; i++) {
    previous = temp;
    temp = temp->next;
  }
  if (temp == head && listSize == 1) {
    head = nullptr;
  } else if (temp == head) {
    head = temp->next;
  } else {
    previous->next = temp->next;
  }
  delete temp;
  listSize--;
}

void SLL::findData(int targetData) {
  if (head == nullptr) {
    cout << "There are no nodes on this list.\n";
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

void SLL::coutList() {
  Node *temp = head;
  cout << "[ ";
  while (temp != nullptr) {
    cout << temp->data << "\t";
    temp = temp->next;
  }
  cout << "]  list size:" << listSize << "\n";
}
