#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int d) {
          data = d;
          prev = next = nullptr;
    }
};

// Deletes the first node (head) of the list
// and returns the second node as new head
Node *delHead(Node *head) {

    // If empty, return
    if (head == nullptr)
        return nullptr;

    // Store in temp for deletion later
    Node *temp = head;

    // Move head to the next node
    head = head->next;

    // Set prev of the new head
    if (head != nullptr)
        head->prev = nullptr;

    // Free memory and return new head
    delete temp;
    return head;
}

void printList(Node *head) {
    for (Node *curr = head; curr != nullptr; curr = curr->next)
        cout << curr->data << " ";
    cout << endl;
}

int main() {

    // Create a hardcoded doubly linked list:
    // 1 <-> 2 <-> 3
    struct Node *head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    printf("Original Linked List: ");
    printList(head);

    printf("After Deletion at the beginning: ");
    head = delHead(head);

    printList(head);

    return 0;
}
