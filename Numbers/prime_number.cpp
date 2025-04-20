
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

bool isprime=true;

if(n<2){
  isprime=false;
}else{
  for(int i=2;i<n;i++){
    if(n%i==0){
      isprime= false;
      break;
    }
  }
}

string result= isprime ? "is Prime Number" : "is Not a Prime Number";
cout<<"The number is "<<n<< " is "<<result;

return 0;   
  
}

