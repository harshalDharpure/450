
#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back
using namespace std;

int sumofno(int n){
    int sum=0;
    int temp=n;

    while(temp!=0){
        int dig=temp%10;
        sum+=dig;
        temp/=10;
    }
    return sum;
}

int isharshad(int n){
    int b=sumofno(n);
    
    int c=n;

    if(c%b==0){
        return true;
    }else{
        return false;
    }

}


int32_t main()
{

#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif

int n;
cin>>n;

if(isharshad(n)){
    cout<<"it is Harshad Number";
}else{
    cout<<"it is Not a harshad Number";
}


return 0;   
  
}

