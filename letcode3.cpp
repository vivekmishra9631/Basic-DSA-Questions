#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"enter any no."<<endl;
    cin>>a;
    int ans=0;
    if (int (ans>INT_MAX/10)||(ans<INT_MIN/10))
    {
        cout<<"0";
    }
    else
    {while(a!=0){
       int digit=a%10;
        ans=ans*10+digit;
        a/=10;
        
    }
     cout<<ans;
    }
    
    


return ans;
}