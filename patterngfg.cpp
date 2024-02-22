#include<bits/stdc++.h>
using namespace std;

vector<int> arr;
    vector<int> pattern1(int N){
        if(N==arr[0]){
            return arr;
        }
        arr.push_back(N+5);
        return pattern1(N+5);
        
    }
    vector<int> pattern(int N){
        // code here
        
        // base condition
        if(N<=0){
            arr.push_back(N);
            return pattern1(N);
        }
        
        arr.push_back(N);
        return pattern(N-5);
        
    }
    
    int main(){
        int N=16;
        vector<int>arr= pattern(N);
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
    }
