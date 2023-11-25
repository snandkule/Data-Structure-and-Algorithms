class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minv = prices[0];
        int ans=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]>minv)
                ans = max(ans, prices[i]-minv);
            minv= min(minv, prices[i]);
        }
        return ans;
        
    }
};