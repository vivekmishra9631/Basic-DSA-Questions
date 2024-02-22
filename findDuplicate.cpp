#include<bits/stdc++.h>
using namespace std;
int code1(vector<int> arr){
    int n;
    n=arr.size();
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];


    }
    for(int j=1;j<n;j++){
        ans=ans^j;
    }
    return ans;
}
int code2(vector<int> arr1){
    int n;
    n=arr.size();
    int sum=0;
    for (int i = 0; i <n; i++)
    {
        sum=sum+arr[i];
    }
    int ans;
    ans=sum-(n*(n-1))/2;

    return ans;

}
int main(){
    
return 0;
}