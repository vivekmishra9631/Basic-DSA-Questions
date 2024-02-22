#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(arr[j]==s-arr[i]){
                ans.push_back({arr[i],arr[j]});
            }
        }
    }
    return ans;
}
int main(){
    
return 0;
}