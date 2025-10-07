#include<bits/stdc++.h>
using namespace std;

bool isplaindrome(string s){
    int l=0,r=s.size()-1;
    while(l<r){
        if(s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

string longestpalindrome(vector<string> &arr){
    string longest="";
    for(auto &word:arr){
        if(isplaindrome(word)){
            if(word.size() > longest.size()){
                longest=word;
            }
        }
    }
    return (longest == "")?"No plaindrome found" : longest;
}

int main()
{
    int n;
    cin>>n;

    vector<string> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    string ans=longestpalindrome(arr);
    cout<<ans<<endl;

}
