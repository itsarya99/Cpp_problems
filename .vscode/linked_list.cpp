#include<bits/stdc++.h>
using namespace std;





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
    Node*head=new Node(10);
    //link the second node
    head->next=new Node(20);
    //link the third node
    head->next->next=new Node(30);
    //link the fourth node
    head->next->next->next=new Node(40);

    //ptinting linked list
    Node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}