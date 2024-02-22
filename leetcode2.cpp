#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n!=0)
    {
        //int remainder= n%2;
        
        //if(remainder!=0){
            //count=count+1;
       // }
        //else{
           // break;
       // }
        //n=n/2;
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<count;
return count;
}