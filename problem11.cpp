#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char i=65;
    while(i<=(65+n-1))
    {
        int j=1;
         char count=i;
        while(j<=n)
        {
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
return 0;
}