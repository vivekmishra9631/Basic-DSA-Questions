#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str,int s,int e){
    if(s>e)
        return 1;

    if(str[s]!=str[e]){
        return 0;
    }

    else if(str[s]==str[e]){
        return checkPalindrome(str,s+1,e-1);
    }



    
}
int main(){
    string str="abcde";
    if(checkPalindrome(str,0,str.length()-1)){
        cout<<"True";
    }

    else{
        cout<<"False";
    }

return 0;
}