#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,3,2,4,23,4,1,2,2};
    unordered_map<int,int> freq;

    for(int x:arr){
        freq[x]++;
    }

    bool found=false;
    for(auto &p : freq){
        if(p.second>1){
            cout<<p.first<<" ";
            found=true;
        }
    }

    if(!found){
        cout<<"No repeating elements found";
    }
    cout<<endl;
}
