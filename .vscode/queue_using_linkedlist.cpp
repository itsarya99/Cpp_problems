#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node*next;

};
node*front =NULL;
node*rear =NULL;

void enqueue(int value){
    node*newnode = new node;
    newnode->data= value;
    newnode->next= NULL;
    if(front ==NULL){
        front = rear= newnode;

    }
    else{
        rear->next= newnode;
        rear = newnode;
    }
    cout<<"deleted from queue\n"<<front->data;

}
void dequeue(){
    if (front ==NULL){
        cout<<"queue is empty\n";
        return;
    }
    node*temp = front;
    front=front->next;
    cout<<"dequeued"<<temp->data<<"from queue"<<endl;
    delete temp;

    if(front==NULL){
        rear= NULL;
    }
}
void display(){
    if(front==NULL){
        cout<<"queue is empty\n";
        return ;
    }
    node*temp =front;
    cout<<"queue elements:";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}
int main(){
    int choice, value;
    do{
        cout<<"1. enqueue"<<endl;
        cout<<"2. dequeue"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.exit"<<endl;

        cout<<"enter your choice"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"enter value to enqueue";
            cin>>value;
            enqueue(value);
            break;
            
            case 2:
            dequeue();
            break;
            
            case 3:
            display();
            break;

            case 4:
            cout<<"existing.."<<endl;

            default:
            cout<<"invalid choice!"<<endl;
        }
        
    }
    while(choice!=4);
    return 0;
}