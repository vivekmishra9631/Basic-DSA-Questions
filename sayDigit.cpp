#include<bits/stdc++.h>
using namespace std;

void sayDigit(int n){
    
    if(n==0)
        return;
    vector<string> arr{"zero","one","two","three","four","five","six","seven","eight","nine"};
    vector<string> ans;
    int digit=n%10;
    n/=10;
    ans.push_back(arr[digit]);
     sayDigit(n);
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }

    

}



int main(){
    int n=295;
    sayDigit(n);


return 0;
}