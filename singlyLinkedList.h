// func decleration for singly linked list
class SLL {
private:
  struct Node {
    int data;
    Node *next;
  };
  Node *head;

public:
  int listSize = 0;
  SLL() { head = nullptr; }
  void addWithPlacement(int newData, int place);
  void addFromHead(int newData);
  void addFromTail(int newData);
  void addFromMid(int newData, int place);
  void removeNodePlacement(int place);
  void findData(int targetData);
  void coutList();
};