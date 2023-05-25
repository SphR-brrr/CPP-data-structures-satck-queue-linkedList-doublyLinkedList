// stack class decleration
class Stack {
  int top;
  int arr[100];

public:
  Stack() { top = -1; }
  bool isEmpty();
  bool isFull();
  void push(int NewData);
  void pop();
  void peek();
};