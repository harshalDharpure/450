//GCD of the Number


#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back
using namespace std;
int32_t main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif

int a,b;
cin>>a>>b;

while(a!=b){
  if(a>b){
    a-=b;
  }else{
    b-=a;
  }
}

cout<<"gcd of the Number is "<<a;

return 0;   
  
}

