
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
for(int i=1;i<=n;i++){
  if(n%i==0){
    cout<<i<<" ";
  }
}

return 0;   
  
}

