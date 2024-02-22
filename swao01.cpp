#include<bits/stdc++.h>
using namespace std;
vector<int> swap01(vector<int> &arr){
    int i=0;
    int j=arr.size()-1;
    while(j>i){
        while(arr[i]==0 &&j>i){
            i++;
        }
        while(arr[j]==1 &&j>i){
            j--;
        }
        if(j>i){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

    }
}
int main(){
    
return 0;
}