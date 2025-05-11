
#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back
using namespace std;

bool isabundant(int n){
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return (sum>n);
}

int32_t main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif

int n;
cin>>n;

if(isabundant(n)){
    cout<<n<<"it is a abundant Number";
}else{
    cout<<n<<"it is Not a abundant number";
}

return 0;   
  
}

