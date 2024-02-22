#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
     int ans=0;
    int i=0;
    while(n!=0)
    {  
        int digit=n%10;
        if (digit==1)
        {int ans=(digit*pow(2,i))+ans;
        }
        else{
            break;
        }
        n=n/10;
        i++;

        
    }
    cout<<ans;
return 0;
}