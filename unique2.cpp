#include<bits/stdc++.h>
using namespace std;

    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> arr1;
        for(int i=0;i<arr.size();i++){
            int count=0;
            for(int j=0;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    count++;
                    
                }
            }
            arr1.push_back(count);
            
        }

        for(int l=0;l<arr1.size();l++){
            cout<<arr1[l]<<endl;
        }
        int ans=0;
        for(int k=0;k<arr1.size();k++){
            ans=ans^arr1[k];
        }
      if(ans==0){
          return false;
      }
        else{
            return true;
        }
    }

int main(){
    vector<int> arr2={4,0,2,-5,-4};
    cout<<uniqueOccurrences(arr2);
    
return 0;
}