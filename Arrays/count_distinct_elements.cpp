#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> arr={1,2,3,4,65,6,5,1,2,3};

    unordered_set<int> s(arr.begin(),arr.end());

    cout<<"No of distint elements is"<<s.size()<<endl;

}
