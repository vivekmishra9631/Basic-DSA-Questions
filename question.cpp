#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans,i=0;
    while(n!=0)
    {
          int a=n&1;
        ans=(a*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans;
return 0;
}