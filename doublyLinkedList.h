class DLL {  // DLL function declaration
private:
  struct Node {
    int data;
    Node *next;
    Node *prev;
  };
  Node *head;
  Node *tail;

public:
  int listSize = 0;
  DLL() {
    head = nullptr;
    tail = nullptr;
  }
  void addWithPlacement(int place, int newData);
  void addFromHead(int newData);
  void addFromTail(int newData);
  void addFromMid(int place, int newData);
  void removeNodePlacement(int place);
  void findData(int targetData);
  void coutList();
};