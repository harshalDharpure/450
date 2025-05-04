class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int max_sum = arr[0];
        int current_sum=arr[0];
        
        for(int i=1;i<arr.size();i++){
            current_sum = max(arr[i],current_sum+arr[i]);
            max_sum= max(max_sum,current_sum);
        }
        return max_sum;
        
    }
};
