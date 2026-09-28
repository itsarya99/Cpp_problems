#include<bits/stdc++.h>
using namespace std;

// insert a node at first /beggining of the linked list in existing  linked list

class Node{
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
   //create a function insert_at_beginning() to insert a node at the beggining of the linked list
    Node*head=new Node(10);  //head= object ki memory
    //node()=initialization
     //link the second node
     head->next=new Node(20);
     //link the third node
     head->next->next=new Node(30);
     //link the fourth node
     head->next->next->next=new Node(40);
    
     //insert a new node at the beggining of the linked list
     Node*new_node=new Node(5); //work:-1. create a new node with data 5
     new_node->next=head;//work:-2. point the next of the new node to the current head
     head=new_node; //work:-3. update the head to point to the new node

     //insert a new node at the end of the linked list
        Node*new_node2=new Node(50); //work:-1. create a new node with data 50
        Node*temp=head; //work:-2. create a temporary pointer to traverse the linked list
        while(temp->next!=nullptr){ //work:-3. traverse the linked list until the last node
            temp=temp->next;
        }
        temp->next=new_node2; //work:-4. point the next of the last node to the new node


        //insert a node after a given node in the linked list
        Node*new_node3=new Node(25); //work:-1. create a new node with data 25
        Node*temp2=head; //work:-2. create a temporary pointer to traverse the linked list
        while(temp2!=nullptr && temp2->data!=20){ //work:-3. traverse the linked list until the node with data 20 is found
            temp2=temp2->next;
        }
        if(temp2!=nullptr){ //work:-4. if the node with data 20 is found
            new_node3->next=temp2->next; //work:-5. point the next of the new node to the next of the found node
            temp2->next=new_node3; //work:-6. point the next of the found node to the new node
        }
        //output will be 5 10 20 25 30 40 50



        //learning:- we insert a new node after a given node in the linked list by traversing the linked list until the node with the given data is found and then point the next of the new node to the next of the found node and then point the next of the found node to the new node



// learning:- we insert a new at end of the linked list by traversing the linked list until the last node and then point the next of the last node to the new node
    
//most imp
// insert a node at specified position in the linked list
    Node*new_node4=new Node(15); //work:-1. create a new node with data 15
    int position=3; //work:-2. specify the position where the new node will be inserted
    Node*temp3=head; //work:-3. create a temporary pointer to traverse the linked list
    int count=1; //work:-4. initialize a counter to keep track of the current position
    while(temp3!=nullptr && count<position-1){ //work:-5. traverse the linked list until the position where the new node will be inserted is found
        temp3=temp3->next;
        count++;
    }
    if(temp3!=nullptr){ //work:-6. if the position is found
        new_node4->next=temp3->next; //work:-7. point the next of the new node to the next of the found node
        temp3->next=new_node4; //work:-8. point the next of the found node to the new node
    }


// 



     //printing linked list
     Node*temp=head;
     while(temp!=nullptr){
          cout<<temp->data<<" ";
          temp=temp->next;
     }


}


//

