#include<bits/stdc++.h>
using namespace std;

class Member {
    private:
        int membershipid;
    public:
        Member(int one){
            membershipid=one;
        }
        int sol(){
            return membershipid;
        }
    
};

class VIPMember : public Member{
    public:
        VIPMember(int one):Member(one){}
        void getMembershipid(){
            cout<<sol();
        }
};



int main() {

    VIPMember obj(1);
    obj.getMembershipid();
    return 0;
}