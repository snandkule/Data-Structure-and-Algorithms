class Solution {
    public int climbStairs(int n) {
        if(n==1)return 1;
        int x1=1,x2=2;
        
        
        for(int i=3;i<=n;i++){
            int t = x2;
            x2+=x1;
            x1=t;
        }
        return x2;
        
    }
}