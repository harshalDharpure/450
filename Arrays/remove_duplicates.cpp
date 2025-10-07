#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={4,5,6,78,1,12,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    set<int> s(arr,arr+n);

    cout<<"Array after removing duplicates";

    for(int x:s){
        cout<<x<<" ";
    }
    cout<<endl;
}
