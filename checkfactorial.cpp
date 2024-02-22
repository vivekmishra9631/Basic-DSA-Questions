#include<bits/stdc++.h>
using namespace std;
bool isFactorial(long long N){
        for(int i=0;;i++){
            if(N%i == 0)
                N=N/i;
                
            else 
                break;
                
            
        }
        
        if(N==1)
            return 1;
                
        else 
            return 0;
    }
int main(){
    
return 0;
}