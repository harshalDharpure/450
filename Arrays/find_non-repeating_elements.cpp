#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,3,2,4,23,4,1,2,2};
    unordered_map<int,int> freq;

    for(int x:arr){
        freq[x]++;
    }

    bool found=false;
    for(int x:arr){
        if(freq[x]==1){
            cout<<x<<" ";
            found=true;
        }
    }

    if(!found){
        cout<<"No non-repeating elements found are";
    }
    cout<<endl;
    return 0;
    
}
