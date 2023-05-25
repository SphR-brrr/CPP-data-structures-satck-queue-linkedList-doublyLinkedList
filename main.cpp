#include "doublyLinkedList.h"
#include "queue.h"
#include "singlyLinkedList.h"
#include "stack.h"
#include <iostream>
using namespace std;

// to launch full program, launch "_programRunner.bat" and open .exe file
// to remove program, launch "_removeProgram.bat" to remove files made by _programRunner

int main() {
  int choice;
  int userDataInput;
  int userLocInput;
  Queue myQueue;
  Stack myStack;
  SLL mySLL;
  DLL myDLL;

  do {
    cout << "\nPlease choose an option:\n"; // main menu
    cout << "1. Make a Queue\n";
    cout << "2. Make a Stack\n";
    cout << "3. Make a Singly linked list\n";
    cout << "4. Make a Doubly linked list\n";
    cout << "5. Exit program\n";
    cin >> choice;

    switch (choice) {
    case 1: // Q menu
      int qChoice;
      do {
        cout << "\nQueue options:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Take a peek at queue\n";
        cout << "4. Back to main menu\n";
        cin >> qChoice;

        switch (qChoice) { // Q functions
        case 1:
          cout << "\nEnter new data: ";
          cin >> userDataInput;
          myQueue.enqueue(userDataInput);
          break;
        case 2:
          myQueue.dequeue();
          break;
        case 3:
          myQueue.peek();
          break;
        case 4:
          break;
        default:
          cout << "\nInvalid input.\n";
          break;
        }
        if (qChoice == 4) {
          break;
        }
      } while (1);
      break;
    case 2: // S menu
      int sChoice;
      do {
        cout << "\nStack options: \n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Take a peek at stack\n";
        cout << "4. Back to main menu\n";
        cin >> sChoice;

        switch (sChoice) { // S functions
        case 1:
          cout << "\nEnter new data: ";
          cin >> userDataInput;
          myStack.push(userDataInput);
          break;
        case 2:
          myStack.pop();
          break;
        case 3:
          myStack.peek();
          break;
        case 4:
          break;
        default:
          cout << "\nInvalid input.\n";
          break;
        }
        if (sChoice == 4) {
          break;
        }
      } while (1);
      break;

    case 3: // SLL menu
      int sllChoice;
      do {
        cout << "\nSingly Linked List options:\n";
        cout << "1. Add data in desired placement\n";
        cout << "2. Add data from Head\n";
        cout << "3. Add data from Tail\n";
        cout << "4. Remove data from desired placement\n";
        cout << "5. Seach for a data's location\n";
        cout << "6. Print list\n";
        cout << "7. Back to main menu\n";
        cin >> sllChoice;

        switch (sllChoice) { // SLL functions
        case 1:
          cout << "\nEnter new data: ";
          cin >> userDataInput;
          cout << "\nEnter data's placement: ";
          cin >> userLocInput;
          mySLL.addWithPlacement(userDataInput, userLocInput);
          break;
        case 2:
          cout << "\nEnter new data: ";
          cin >> userDataInput;
          mySLL.addFromHead(userDataInput);
          break;
        case 3:
          cout << "\nEnter new data: ";
          cin >> userDataInput;
          mySLL.addFromTail(userDataInput);
          break;
        case 4:
          cout << "\nEnter data's placement: ";
          cin >> userLocInput;
          mySLL.removeNodePlacement(userLocInput);
          break;
        case 5:
          cout << "Enter node's data: ";
          cin >> userDataInput;
          mySLL.findData(userDataInput);
          break;
        case 6:
          mySLL.coutList();
          break;
        case 7:
          break;
        default:
          cout << "\nInvalid input.\n";
          break;
        }
        if (sllChoice == 7) {
          break;
        }
      } while (1);
      break;

    case 4: // DLL menu
      int dllChoice;
      do {
        cout << "\n Doubly Linked List options:\n";
        cout << "1. Add data in desired placement\n";
        cout << "2. Add data from Head\n";
        cout << "3. Add data from Tail\n";
        cout << "4. Remove data from desired placement\n";
        cout << "5. Seach for a data's location\n";
        cout << "6. Print list\n";
        cout << "7. Back to main menu\n";
        cin >> dllChoice;

        switch (dllChoice) { // DLL functions
        case 1:
          cout << "\nEnter new data: ";
          cin >> userDataInput;
          cout << "\nEnter data's placement: ";
          cin >> userLocInput;
          myDLL.addWithPlacement(userLocInput, userDataInput);
          break;
        case 2:
          cout << "\nEnter new data: ";
          cin >> userDataInput;
          myDLL.addFromHead(userDataInput);
          break;
        case 3:
          cout << "\nEnter new data: ";
          cin >> userDataInput;
          myDLL.addFromTail(userDataInput);
          break;
        case 4:
          cout << "\nEnter data's placement: ";
          cin >> userLocInput;
          myDLL.removeNodePlacement(userLocInput);
          break;
        case 5:
          cout << "Enter node's data: ";
          cin >> userDataInput;
          myDLL.findData(userDataInput);
          break;
        case 6:
          myDLL.coutList();
          break;
        case 7:
          break;
        default:
          cout << "\nInvalid input.\n";
          break;
        }
        if (dllChoice == 7) {
          break;
        }
      } while (1);
      break;

    case 5:
      cout << "\nProgram has ended.";
      return 0;
    default:
      cout << "\nInvalid input\n";
      break;
    }
  } while (1);
  return 0;
}