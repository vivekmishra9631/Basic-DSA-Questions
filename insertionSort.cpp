#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int *arr,int size){
    if(size==0 ||size==1){
        return ;
    }
    
    

    int key=arr[1];
    int j=0;
    while(j>=0 &&arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;

    InsertionSort(arr,size-1);

   
    
   
    
   

    
   

   

        
    
    
}
int main(){

    int arr[7]={10,1,7,4,8,2,11};
    int n=7;
    InsertionSort(arr,n);
     for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    
return 0;
}