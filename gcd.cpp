#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    else if (b==0){
        return a;
    }
    
    while(a!=b){
        if(a>b){
            a-=b;
        }
        if(b>a){
            b-=a;
        }
    }
    return a;
}
int main(){
    cout<<gcd(20,20);

return 0;
}