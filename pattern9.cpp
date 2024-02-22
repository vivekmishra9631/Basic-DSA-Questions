#include<bits/stdc++.h>
using namespace std;
int main(){
   /* int n;
    cin>>n;
    char i=65;
    while(i<=(65+n-1))
    {
        int j=1;
        while(j<=n)
        {
            cout<<i<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        char ch='A'+i-1;
        while(j<=n)
        {
            cout<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
return 0;
}