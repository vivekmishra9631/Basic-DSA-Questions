#include<bits/stdc++.h>
using namespace std;

int exponential(int m,int n){
    if(n==0){
        return 1;
    }

    if(n==1){
        return m;
    }
     cout<<"before"<<m<<n<<endl;
    int ans=exponential(m,n/2);
        cout<<"after"<<m<<n<<endl;
    if(n&1){
        return m*ans*ans;
    }

    else{
        
        return ans*ans;
    }
}
int main(){
    int a=3;
    int b=5;
    int ans=exponential(3,5);
    cout<<ans;

return 0;
}