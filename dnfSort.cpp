#include<bits/stdc++.h>
using namespace std;
vector<int> dnfSort(vector<int> &arr){
    int low=0,mid=0;
    int high=arr.size()-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }

        else if(arr[mid]==2){
            swap(arr[mid],arr[low]);
            high--;
        }
    }
    
}
int main(){
    
return 0;
}