class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector<long long int> vec(n, 1ll);
        if (n == 1) 
        {
            return vec;
        }
        
        long long temp = 1ll;
        for(int i = 0;i < n;i++) 
        {
            vec[i] *= temp;
            temp *= nums[i];
        }
        
        temp = 1ll;
        for(int i = n - 1;i >= 0;i--)
        {
            vec[i] *= temp;
            temp *= nums[i];
        }
        
        
        return vec; 
        
        //code here        
    }
};