class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0];
        int mxprofit = 0;
        for(int i = 1; i<n ; i++){
            if(buy> prices[i]){
             buy = prices[i];
            }
            else{
                int profit = prices[i] - buy ;
                mxprofit = max(mxprofit, profit);
             }
         }
         return mxprofit;
    }
};