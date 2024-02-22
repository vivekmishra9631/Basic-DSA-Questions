#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>=97 && ch<= 122){
        cout<<"this is lower case";
    }
    else if(ch>=65 && ch<=90){
        cout<<"this is upper case";
    }
    else if(ch>=48 && ch<=57){
        cout<<"this is a number from 0 to 9";
    }
    else{
        cout<<"input any other character";
    }
return 0;
}