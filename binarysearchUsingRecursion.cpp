#include<bits/stdc++.h>
using namespace std;

bool BinarySearch(int* arr,int s,int e,int key){
    
    int mid=s+(e-s)/2;

    if(s>e){
        return 0;
    }
    if(arr[mid]==key){
        return 1;
}
    if(arr[mid]<key){
        return BinarySearch(arr,mid+1,e,key);
    }

    else{
        return BinarySearch(arr,s,mid-1,key);
    }
}
int main(){
     int arr[6]={1,2,3,4,5,7};
     int start=0;
     int end=5;
     int key=2;
     bool ans=BinarySearch(arr,start,end,key);
     cout<<ans;


return 0;
}