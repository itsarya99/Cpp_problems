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
    Node*first=new Node(2);
    first->next=new Node(3);
    first->next->next=new Node(4);

}