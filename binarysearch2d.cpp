#include<bits/stdc++.h>
using namespace std;

 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int s=0;
        int e=row*col-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(matrix[mid/row][mid%row]==target){
                return 1;
            }
            
            else if(matrix[mid/row][mid%row]<target){
                s=mid+1;
            }
            
            else{
                e=mid-1;
            }
            
            mid=s+(e-s)/2; 
        }
        
        return 0;
        
    }
};
int main(){
    
return 0;
}