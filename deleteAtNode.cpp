#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

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
        
};

void deleteatPosition(int position,Node* &head){
    if(position==1){
        Node *temp=head;
        head= head->next;
        delete temp;
    }
}
int main(){
    
return 0;
}