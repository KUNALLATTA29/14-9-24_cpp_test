#include<bits/stdc++.h>
using namespace std;

class House{
    private:
        string address;
    public:
        House(string s){
            address=s;
        }
        string sol(){
            return address;
        }
    
};

class Apartment:public House{
    public:
        Apartment(string s):House(s){}
        void getAddress(){
            cout<<sol();
        }
};

int main(){
    
    Apartment obj("bikaner");
    obj.getAddress();
    
    
    return 0;
}