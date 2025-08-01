#include<bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back;

using namespace std;

int32_t main(){
    
 
#ifndef ONLINE_JUDGE

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif


int num;
cin>>num;
int fact=1;

if(num<0){
    cout<<"Fact is not possible";
}else{
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    cout<<"Fact "<<num<<": "<<fact;

}

 return 0;
 
}
