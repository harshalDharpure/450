class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
        int max_prod=arr[0];
        int min_prod=arr[0];
        int result=arr[0];
        
        for(int i=1;i<arr.size();i++){
            if(arr[i]<0){
                swap(max_prod,min_prod);
                
            }
            
            max_prod=max(arr[i],max_prod*arr[i]);
            min_prod=min(arr[i],min_prod*arr[i]);
            result=max(result,max_prod);
        }
        
        return result;
    }
};
