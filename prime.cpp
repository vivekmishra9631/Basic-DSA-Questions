#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0)
        {
            cout<<"not prime"<<endl;
            
        }
        else{
             i=i+1;
        }
       
    }
    cout<<"prime";


return 0;
}