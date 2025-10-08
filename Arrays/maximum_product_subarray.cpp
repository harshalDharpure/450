#include<bits/stdc++.h>
using namespace std;

int maxprodyctsubarray(vector<int>& nums){
    int n=nums.size();
    int result = nums[0];
    int currmax=nums[0];
    int currmin=nums[0];

    for(int i=0;i<n;i++){
        if(nums[i]<0)
            swap(currmax,currmin);
      currmax = max(nums[i],currmax*nums[i]);
      currmin= min(nums[i],currmin*nums[i]);

      result = max(result,currmax);

    }
    return result;

}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"maximum product subarray is "<<maxprodyctsubarray(arr)<<endl;

}
