#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data=val;
        next=NULL;
    }

};

void InsertAtTail(Node* &head,int val){
    Node* n= new Node(val);
    if(head==NULL){
        head=n;
    }
    Node* temp= head;
    while(temp->next!=NULL){
        temp= temp->next;
    }

    temp->next=n;
}

void display(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head= new Node(10);
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    display(head);

return 0;
}