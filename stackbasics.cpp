#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            arr[top]=element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }
     int top(){
        if(top>=0 && top<size){
            return top;
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }

    }
    bool empty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop(); 
return 0;
}