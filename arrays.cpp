#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact=1;
    for(int a=1;a<=n;a++) {
        fact=a*fact;
    }
    cout<<fact;
return 0;
}
