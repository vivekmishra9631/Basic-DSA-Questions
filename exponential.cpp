#include<bits/stdc++.h>
using namespace std;

int exponent(int &a,int &b){
    if(b==0){
        return 1;
    }
    cout<<a<<" before "<<b<<endl;
    b = b-1;
    int small=exponent(a,b);
    b = b+1;
    cout<<a<<" after "<<b<<endl;
    return a*small;
}
int main(){
    int a=4;
    int b=3;
    int ans=exponent(a,b);
    cout<<a<<"  "<<b<<endl;
    cout<<ans;
return 0;
}