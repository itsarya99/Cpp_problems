#include <iostream>

using namespace std;

class Node {
  public: int data;
  Node * next;
  Node * prev;

  // Constructor
  Node(int value) {
    data = value;
    next = nullptr;
    prev = nullptr;
  }
};

// Function to create a new node
Node * createNode(int value) {
  // call constructor
  Node * newNode = new Node(value); 
  return newNode;
}

int main() {
  int value;
  cin >> value;

  Node * node = createNode(10);

  cout << "Node created successfully!" << endl;
  cout << "Data = " << node -> data << endl;
  // will display 0 or NULL
  cout << "Next = " << node -> next << endl;
  // will display 0 or NULL 
  cout << "Prev = " << node -> prev << endl;

  return 0;
}
bool search(Node * head, int key) {
  Node * current = head;
  while (current != nullptr) {
    if (current -> data == key) return true;
    current = current -> next;
  }
  return false;
}

