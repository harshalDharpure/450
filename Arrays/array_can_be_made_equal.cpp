#include<bits/stdc++.h>
using namespace std;

int reducenumber(int n){
    while(n%2==0)n/=2;
    while(n%3==0)n/=3;

    return n;
}

bool canmakeallpairs(vector<int>&arr){
    int reduced=reducenumber(arr[0]);
    for(int i=0;i<arr.size();i++){
        if(reducenumber(arr[i])!=reduced){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    if(canmakeallpairs(arr)){
        cout<<"Yes all numbers can be made equal"<<endl;
    }else{
        cout<<"No "<<endl;
    }
    return 0;
}
