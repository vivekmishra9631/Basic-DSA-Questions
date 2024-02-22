#include<bits/stdc++.h>
using namespace std;

void printName(int end,int count=1){
    
    if(count>end)
        return;

    cout<<"VIVEK"<<endl;
    count++;
    printName(end,count);
}
int main(){
    //int s=1;
    //int e=5;
    printName(5,1);
return 0;
}