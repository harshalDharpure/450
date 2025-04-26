#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back;

using namespace std;

class car{
public: 
    string brand;
    string model;
    int year;
    car(string x, string y, int z);

};

car::car(string x,string y,int z){
    brand=x;
    model=y;
    year=z;
}

int32_t main(){
    
 
#ifndef ONLINE_JUDGE

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

//constructors

car carobj1("BMW","XS",1965);
car carobj2("Audi","Mustang",1654);

cout<<carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year<<"\n";
cout<<carobj2.brand<<" "<<carobj2.model<<" "<<carobj2.year<<"\n";

 return 0;
 
}
