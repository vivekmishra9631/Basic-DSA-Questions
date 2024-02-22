#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int b=~n;
    while(b>0){
        b=b<<1;
    }
    
return b;
}