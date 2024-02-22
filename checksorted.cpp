#include<bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int> arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if (arr[i]>arr[i+1] && i<n){
            return false;
        }

        else{
            continue;
        }
    }
    return true;
}
int main(){
    vector<int> arr1={1,2,3,0};
     bool ans=checkSorted(arr1);
     cout<<ans;

return 0;
}