#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=0;
        while(j<i)
        {
            cout<<i+j;
            j=j+1;
        
        }
        cout<<endl;
        i=i+1;
        //use int value=i; and cout<<value; value=value+1;
    }
return 0;
}