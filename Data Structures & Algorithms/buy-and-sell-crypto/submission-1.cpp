class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int idx = 0;
        int ans = 0;
        for(int i=1;i<n;i++){
            if(prices[i]>=prices[idx]){
                int profit = prices[i]-prices[idx];
                ans = max(profit,ans);
            }else{
                idx = i;
            }
        }

        return ans;
    }
};
