#include<bits/stdc++.h>
using namespace std;

bool compare(pair<string,int> f1,pair<string,int>f2){
	return f1.second>f2.second;
}

int main()
{
	vector<pair<string,int>> fruits = {
		{"apple",10},
		{"gauva",20},
	};

	sort(fruits.begin(),fruits.end(),compare);
   
    for(auto x : fruits){
    	cout<<x.first<<" "<<x.second<<endl;
    }
return 0;
}
