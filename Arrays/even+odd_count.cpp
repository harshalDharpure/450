#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   vector<int> arr(n);

   for(int i=0;i<n;i++){cin>>arr[i]};
    int evencount=0,oddcount=0;

for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        evencount++;

    }else{
        oddcount++;
    }


}
cout<<oddcount<<endl;
cout<<evencount<<endl;
}
