#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back;

using namespace std;

class employee{
private:
    int salary;
public:
    void setsalary(int s){
        salary =s;

    }
    int getsalary(){
        return salary;
    }
};


int32_t main(){
    
 
#ifndef ONLINE_JUDGE

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

employee myobj;

myobj.setsalary(9000);
cout<<myobj.getsalary();

    

 return 0;
 
}
