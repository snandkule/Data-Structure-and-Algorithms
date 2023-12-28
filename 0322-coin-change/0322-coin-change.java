class Solution {
    public int coinChange(int[] coins, int amount) {
        if(amount==0)return 0;
        
        int[] ans = new int[amount+1];
        
        for(int i=0;i<coins.length;i++){
            if(coins[i]==amount)return 1;
            if(coins[i]<amount){
                ans[coins[i]]=1;
            }
        }
        
        for(int i=1;i<=amount;i++){
            
            if(ans[i]==1)continue;
            ans[i]=Integer.MAX_VALUE;
            for(int j=0;j<coins.length;j++){
                if(i-coins[j]>=1){
                    if(ans[i-coins[j]]!=Integer.MAX_VALUE)
                    ans[i] = Math.min(ans[i], 1+ans[i-coins[j]]);
                }
            }
            // System.out.println(i+","+ans[i]);
        }
        if(ans[amount]==Integer.MAX_VALUE)return -1;
        return ans[amount];
        
        
        
    }
}