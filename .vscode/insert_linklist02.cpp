#include<bits/stdc++.h>
using namespace std;
// insert a node at end of the linked list in existing  linked list


/*class Node{
    public:
    int data;
    Node*next;

    //constructor to initialize a new node with data
    Node(int new_data){
        this->data=new_data;
        this->next=nullptr;

    }

};
int main(){
   //create a function insert_at_end() to insert a node at the end of the linked list
    Node*head=new Node(10);  //head= object ki memory
    //node()=initialization
     //link the second node
     head->next=new Node(20);
     //link the third node
     head->next->next=new Node(30);
     //link the fourth node
     head->next->next->next=new Node(40);
    
     //insert a new node at the end of the linked list
        Node*new_node=new Node(50); //work:-1. create a new node with data 50
        Node*temp=head; //work:-2. create a temporary pointer to traverse the linked list
       while(temp->next!=nullptr){ //work:-3. traverse the linked list until the last node
            temp=temp->next;
        }
        temp->next=new_node; //work:-4. point the next of the last node to the new node

        //output will be 10 20 30 40 50

        //learning:- we insert a new node at the end of the linked list by traversing the linked list until the last node is found and then point the next of the last node to the new  node
    }
        */

 
        //doubly linked list

using namespace std;

class Node {
public:
    int data;
    Node *next, *prev;

    Node(int new_data) {
        data = new_data;
        next = prev = nullptr;
    }
};

// Function to insert a new node at the front of doubly linked list
Node* insertAtFront(Node* head, int new_data) 
{
       Node* new_node = new Node(new_data);
    new_node->next = head;
    if (head != nullptr)
        head->prev = new_node;
    return new_node;
}

// Function to print the list in required format
void printList(Node* head) {

    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data;
        if (curr->next != nullptr) {
            cout << " <-> ";
        }
        curr = curr->next;
    }
    cout << endl;
}

int main() {

    // Create a hardcoded doubly linked list:
    // 2 <-> 3 <-> 4
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->prev = head;
    head->next->next = new Node(4);
    head->next->next->prev = head->next;

    // Insert a new node at the front of the list
    int data = 1;
    head = insertAtFront(head, data);

    printList(head);

    return 0;
}
