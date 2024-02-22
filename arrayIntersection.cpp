#include<bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1,int n,vector<int> &arr2,int m){
    /*vector<int> ans;
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (arr1[i]<arr2[j]) break;
            if(arr1[i]==arr2[j]){
                ans.push_back(arr1[i]);
                arr1[j]=INT32_MIN;
                break;
                
            }
        }
        if(ans.size()<=0){
            ans.push_back(-1);
        }
    }*/
    //better
    //2 pointer approach
    vector<int> ans;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
                arr1[j]=INT32_MIN;
                i++;
                j++;
                
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }

return ans;
}
int main(){
    
return 0;
}