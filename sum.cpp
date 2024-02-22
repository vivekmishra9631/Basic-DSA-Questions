#include<bits/stdc++.h>
using namespace std;

int sum(int *arr,int n){

    if(n==0){
        return 0;
    }
    
    if(n==1){
        return arr[0];
    }
        
        int ans=sum(arr+1,n-1);
    return arr[0]+ans;
}
int main(){
    int arr[5]={7,2,3,4,51};
    int n=5;
    int ans=sum(arr,n);
    cout<<ans;

return 0;
}