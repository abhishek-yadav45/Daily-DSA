class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
     vector<int>suffix(n);   
     int prod = 1;
     for(int i = 0 ; i< n ; i++){
        suffix[i] = prod;
        prod *= nums[i];
     }
     vector<int>prefix(n);
     int p = 1;
     for(int i = n-1; i>= 0; i--){
        prefix[i] = p;
        p *= nums[i]; 
     }
     vector<int>ans(n);
     for(int i = 0 ;i< n; i++){
        ans[i] = suffix[i]*prefix[i];
     }
     return ans;
    }
};