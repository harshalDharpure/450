#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back;

using namespace std;
bool isprime(int n){
    if(n<=1) return false;
    if(n<=3) return true;
    if(n%2 ==0 || n%3==0) return false;
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0)
            return false;

    }
    return true;
    
}
int32_t main(){
    
 
#ifndef ONLINE_JUDGE

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    int n;
    cin>>n;

    if(isprime(n)){
        cout<<"it is Prime number"<<endl;

    }else{
        cout<<"it is not prime number"<<endl;
    }

    

 return 0;
 
}
