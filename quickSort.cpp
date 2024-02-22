#include<bits/stdc++.h>
using namespace std;

int  partition(int arr[],int s,int e){
    int pivot=arr[s];
    int count=0;
    for (int i = s+1; i <=e; i++)
    {
        if(arr[i]<pivot){
            count++;
        }

        
    }

    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]);
    int i=s, j=e;
    while(i<pivotIndex && j>pivotIndex){
        if(arr[i]<pivot){
            i++; 
             }

        else if(arr[j]>pivot)
            j--;

        else if(arr[i]>pivot && arr[j]<pivot){
            swap(arr[i++],arr[j--]); 
        }
    }

    return pivotIndex;  
    

   
    
    

}

void quickSort(int arr[],int s,int e){
    if(s>=e)
        return;

    //partition
    int p=partition(arr,s,e);

    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);


}
int main(){
    int arr[5]={3,1,4,5,2};
    int s=0;
    int e=4;
    quickSort(arr,s,e);
    for (int i = 0; i <=e; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
return 0;
}