
#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back
using namespace std;

int order(int n){
  int len=0;
  while(n!=0){
    len++;
    n/=10;
  }
  return len;
}

bool armstrong(int n,int len){
  int temp=n;
  int digit;
  int sum=0;
  while(n!=0){
    digit=n%10;
    sum+=pow(digit,len);
    n/=10;

  }

  return temp==sum;
}

int32_t main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif

int n;
cin>>n;

int len;

len=order(n);
if(armstrong(n,len)){
  cout<<"it is a armstrong Number";

}else {
  cout<<"it is Not a armstrong number";
}

return 0;   
  
}

