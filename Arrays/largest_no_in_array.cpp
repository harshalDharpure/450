
#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back
using namespace std;

int largestsoinarray(int arr[],int n){
  int large=arr[0];
  for(int i=1;i<n;i++){
    if(arr[i]>largest){
      largest=arr[i];
    }
  }
  return large;
}

int32_t main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif

int n;
cin>>n;

int arr[n];


for(int i=0;i<n;i++){
  cin>>arr[i];
}

cout<<largestsoinarray(arr,n);


return 0;   
  
}

