#include<bits/stdc++.h>
using namespace std;

string twosum(int n,vector<int>&arr,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target) return "Yes";
        }
    }
    return "No";
}

int main()
{
    int n=5;
    
    vector<int> arr={2,6,5,8,11};
//     for(int i=0;i<n;i++){
//         cin>>arr[i]
//     }
// }

    int target=14;
    string ans=twosum(n,arr,target);
    cout<<ans<<endl;

    return 0;

}











#####################
##Better appraoches
####################

#include <bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> &arr, int target) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return "YES";
        }
        mpp[num] = i;
    }
    return "NO";
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}
