class Solution {
    public int maxProduct(int[] nums) {
        int prefix = 0;
        int postfix = 0;
        
        int n = nums.length;
        int ans = nums[0];
        for(int i=0;i<nums.length;i++){
            prefix = (prefix==0 ? 1: prefix)*nums[i];
            postfix = (postfix==0? 1: postfix)*nums[n-1-i];
            
            ans = Math.max(ans, Math.max(prefix,postfix));
        }
        return ans;
        
        // int n = A.length, res = A[0], l = 0, r = 0;
        // for (int i = 0; i < n; i++) {
        //     l =  (l == 0 ? 1 : l) * A[i];
        //     r =  (r == 0 ? 1 : r) * A[n - 1 - i];
        //     res = Math.max(res, Math.max(l, r));
        // }
        // return res;
        
     
        
        
        
        
        
    }
}