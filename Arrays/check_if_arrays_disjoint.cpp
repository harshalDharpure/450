#include<bits/stdc++.h>
using namespace std;
bool ardisjoint(vector<int>&arr1,vector<int>&arr2){
    unordered_set<int>s;
    for(int x:arr1){
        s.insert(x);

    }

    for(int x:arr2){
        if(s.find(x)!=s.end()){
            return false;
    }
}
return true;
}
int main()
{
    int n1,n2;
    cin>>n1;
    vector<int> arr1(n1);
    for(int i=0;i<n;i++){cin>>arr1[i];}
    cin>>n2;
    vector<int> arr2(n2);
    for(int i=0;i<n;i++){cin>>arr2[i];}

    if(ardisjoint(arr1,arr2))\
        cout<<"arrays are disjoint"<<endl;
    else
        cout<<"arrays are not disjoint"<<endl;

    return 0;
}
