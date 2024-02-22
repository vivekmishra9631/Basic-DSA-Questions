#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
  
    for (i = 0; i <=30; i++)
    {
          int ans= pow(2,i);

          if(ans==n){
              return true;
          }
    }
}
    
       
       