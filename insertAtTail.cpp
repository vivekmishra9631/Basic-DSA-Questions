#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void InsertAtTail(Node* &tail,int val){
    Node* temp= new Node(val);
    tail->next= temp;
    tail=temp;
    
    /*if(head==NULL){
        head=temp;
    }
    Node* node1= head;
    while(node1->next != NULL){
        node1= node1->next;
    }
    node1->next= temp; */
}

void display(Node *head){
    Node* temp= head;
    while(temp!= NULL){
        cout<<temp->data <<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main(){
    Node* node1= new Node(10);
    Node* head= node1;
    Node* tail= node1;
    InsertAtTail(tail,1);
    InsertAtTail(tail,2);
    InsertAtTail(tail,3);
    display(head);

return 0;
}

