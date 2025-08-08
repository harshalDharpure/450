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

int r,c;
cin>>r>>c;

int arr[r][c];

cout<<"Enter the Number of elements";
for(int i=0;i<r;i++){
    for(int j=0;i<cols;j++){
        cin>>arr[i][j];
    }
}

cout<<"Matrix of the number is";
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

 return 0;
 
}
