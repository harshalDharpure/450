
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

int n;
cin>>n;
int fact=1;

if(n<0){
  cout<<"Not Possible";
}else{
  for(int i=1;i<=n;i++){
    fact=fact*i;
  }
  cout<<"Factorial of Number is "<<fact;
}

return 0;   
  
}

