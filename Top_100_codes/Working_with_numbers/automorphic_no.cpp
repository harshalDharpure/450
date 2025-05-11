
#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back
using namespace std;

int isautomorphics(int n){
    int sq=n*n;
    while(n!=0){
        if(n%10 != sq%10){
            return 0;
        }
        n/=10;
        sq/=10;
    }
    return 1;
}
int32_t main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif

int n;
cin>>n;

if(isautomorphics(n)){
    cout<<"it is automorphics number";
}else{
    cout<<"it is Not automorphics number";
}
return 0;   
  
}

