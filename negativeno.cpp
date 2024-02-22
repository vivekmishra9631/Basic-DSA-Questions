
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
cin>>n;
int ans=0;
int i=0;
int a=(-1)*n;
while(a!=0)
{
    int bit=a&1;
    ans=(bit*pow(10,i))+ans;
    n=n>>1;
    i++;
}
 int b=~(ans);
 int c=b|1;
 cout<<c;
return 0;
}

