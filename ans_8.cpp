#include<bits/stdc++.h>
using namespace std;

class Computer{
    private:
        string brand;
    public:
        Computer(string s){
            brand=s;
        }
        string sol(){
            return brand;
        }
    
};

class Laptop:public Computer{
    public:
        Laptop(string s):Computer(s){}
        void getBrand(){
            cout<<sol();
        }
};

int main(){
    
    Laptop obj("acer");
    obj.getBrand();
    
    
    return 0;
}