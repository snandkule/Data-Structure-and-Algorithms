class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int ans=0, buy=0,sale = 0;
        for(int i=1;i<prices.size();i++){
          
            if(prices[i]<prices[buy]){
                ans = max(ans,prices[sale]-prices[buy]);
                buy = i;
                sale = i;
            }else{
                if(prices[i]>prices[sale]){
                    sale = i;
                    ans = max(ans,prices[sale]-prices[buy]);
                }
               
            }
        }
         ans = max(ans,prices[sale]-prices[buy]);
        return ans;
        
    }
};