#include<bits/stdc++.h>
using namespace std;

class LinkedListNode{
    public:
        int data;
        LinkedListNode *next;
        
    LinkedListNode(int data){
        this->data=data;
        this->next=NULL;
    }
};

LinkedListNode *reverseLinkedList(LinkedListNode *head) 
{   
    if(head==NULL){
        return head;
    }
    // Write your code here
    LinkedListNode* prev=NULL;
    LinkedListNode* curr=head;

    
        LinkedListNode* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;

        return reverseLinkedList(head);

    
}


int main(){
    
return 0;
}