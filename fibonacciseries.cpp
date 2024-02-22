#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<endl<<b<<endl;
    for (int i=1;i<=n;i++)
    {
     int next_number=a+b;
     cout<<next_number<<endl;
     a=b;
     b=next_number;
    }
    
return 0;
}