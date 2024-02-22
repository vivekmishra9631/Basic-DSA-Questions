// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head,int val){
    Node* node1= new Node(val);
    node1->next=head;
    head=node1;
}

void print(Node* head){
    Node* node1=head;
    while(node1 !=NULL){
        cout<<node1->data <<"->";
        node1=node1->next;
        
    }
    cout<<"NULL";
}

int main() {
    // Write C++ code here
    Node* node1= new Node(10);
    Node* head=node1;
    insertAtHead(head,12);
    insertAtHead(head,15);
    print(head);

    return 0;
}