#include<bits/stdc++.h>
using namespace std;
int fibbonaci(int n){
    if(n==0 || n==1){
        return n;
    }

    return fibbonaci(n-1)+fibbonaci(n-2);
}

/*void printFibbonaci(int n){
    for (int i = 0; i <n; i++)
    {
        cout<<fibbonaci(i);
    }
    
}*/
int main(){
    //printFibbonaci(10);
    for (int i = 0; i <10; i++)
    {
        cout<<fibbonaci(i)<<endl;
    }

    
return 0;
}