
#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back;
using namespace std;

class vehical{
    public:
        string brand ="Ford";
        void honk(){
            cout<<"Tuut, tuut \n";
        }
};

class car: public vehical{
public:
    string model ="Mustang";
};


int32_t main(){
    
#ifndef ONLINE_JUDGE

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

car mycar;
mycar.honk();

cout<<mycar.brand + " " +mycar.model;
 return 0;
 
}
