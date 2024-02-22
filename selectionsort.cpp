#include<bits/stdc++.h>
using namespace std;

void selectionSort(int *arr,int size){
    if(size==0||size==1){
        return ;
    }
    //smallest element ko starting me lana h
    int min_index=0;
    int j=0;
    for (int i =1; i < size; i++)
    {   
        
        if(arr[i]<arr[min_index]){
            min_index=i;
        }
    }
   
    swap(arr[0],arr[min_index]);
    selectionSort(arr+1,size-1);

    
    

}
int main(){
    int arr[5]={3,4,5,1,2};
    
        int n=5;
        selectionSort(arr,n);
        
        for(int i=0;i<n;i++){
            cout<<arr[i];
        }
return 0;   
}