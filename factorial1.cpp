#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0)
        return 1;
    
    return n*fact(n-1);
}
int main(){
    int n=5;
    int ans=fact(n);
    cout<<ans;
return 0;
}