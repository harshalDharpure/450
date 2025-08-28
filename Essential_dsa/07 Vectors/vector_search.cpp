#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> arr={10,11,2,3,4,5,6,7};
	int key;
	cin>>key;

	vector<int>::iterator it= find(arr.begin(),arr.end(),key);
	if(it!=arr.end()){
		cout<<"Present at Index "<<it - arr.begin();

	}else{
		cout<<"Element is Not Found"<<endl;
	}

	return 0;
}
