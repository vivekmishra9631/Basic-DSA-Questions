#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
        int height;
        int weight;
        int age;

    public:
        int getAge(){
            return this->age;
        }

        int setWeight(int w){
            return this->weight= w;
        }

    
};

class Male: public Human{
    public:
        string color; 

        void sleep(){
            cout<<"Male sleeping"; 
        }
};
int main(){
    
return 0;
}