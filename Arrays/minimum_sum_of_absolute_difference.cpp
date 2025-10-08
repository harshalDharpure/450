#include<bits/stdc++.h>
using namespace std;
int minimumSumAbsoluteDifference(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    int n=arr.size();
    int median=arr[n/2];
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=abs(arr[i] - median);
    }

    return sum;
}
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = minimumSumAbsoluteDifference(arr);
    cout << "Minimum sum of absolute differences = " << result << endl;
    
    return 0;
}
