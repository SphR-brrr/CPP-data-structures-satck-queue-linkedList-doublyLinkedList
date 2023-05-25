// queue class decleration
class Queue {
private:
  int front, rear;
  int arr[100];

public:
  Queue() {
    front = -1;
    rear = -1;
  }
  bool isEmpty();
  bool isFull();
  void enqueue(int newData);
  void dequeue();
  void peek();
};