// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        this->data=val;
        this->next=NULL;
        
    }
    
    ~Node(){
        int value= this->data;
        if(this->next !=NULL){
          delete next;
          this->next=NULL;
        }
        cout<<"Memory is free for node with data"<<value<<endl;
        
        
    }
};

void InsertAtTail(Node* &head,int val){
    Node* n= new Node(val);
    if(head==NULL){
        head=n;
        return;
        
        
        
    }
    Node* temp= head;
    while(temp->next!=NULL){
        temp= temp->next;
    }

    temp->next=n;
}

void insertAtHead(Node* &head,int val){
    Node* node1= new Node(val);
    node1->next=head;
    head=node1;
}

void insertAtPosition(Node* &head,int position,int d){

    if(position==1){
        insertAtHead(head,d);
        return;
    }
    
    Node* value= new Node(d);
    Node* temp=head;
    int count=0;
    while(count< position-2 && temp->next !=NULL){
        count++;
        temp=temp->next;
    }

//although this below  is written it is not required
    if(temp->next==NULL){
        InsertAtTail(head,d);
        return;
    }
    
    value->next=temp->next;
    temp->next=value;
    
}

void deleteNode(Node* &head,int position){
    if (position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    else{
        Node* curr=head;
        Node *prev=NULL;
        
        int count=1;
        while(count< position){
            prev=curr;
            curr=curr->next;
            count++;
            
        }
        
        prev->next = curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void display(Node *head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head=NULL;
    InsertAtTail(head,1);
    
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    insertAtPosition(head,1,11);
    deleteNode(head,3);
    display(head);
    
return 0;
}