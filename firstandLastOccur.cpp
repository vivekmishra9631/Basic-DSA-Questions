#include <bits/stdc++.h> 
int firstOccurence(vector<int>& arr, int n, int k){
    
    int s=0,e=n-1;
    int ans=-1;
    int ans1=-1;
    int mid=s+((e-s)/2);
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
            
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        
        else if(arr[mid]>k){
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return ans;
}

int lastOccurence(vector<int>& arr, int n, int k){
    int s=0,e=n-1;
    int ans1=-1;
    int mid=s+((e-s)/2);
    while(s<=e){
        if(arr[mid]==k){
            ans1=mid;
            s=mid+1;
            
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        
        else if(arr[mid]>k){
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return ans1;
    
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int, int> pair1;
    pair1.first=firstOccurence(arr,n,k);
    pair1.second=lastOccurence(arr,n,k);
    return pair1;
    
    
    
    
}