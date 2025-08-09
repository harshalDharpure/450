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

int n;
cin>>n;

vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];

}

int count_0=0,count_1=0,count_2=0;

for(int i=0;i<n;i++){
    if(arr[i]==0)count_0++;
    else if (arr[i]==1) count_1++;
    else if (arr[i]==2) count_2++;
}
    int index=0;
    while(count_0--) arr[index++] =0;
    while(count_1--) arr[index++] =1;
    while(count_2--) arr[index++] =2;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


 return 0;
 
}
