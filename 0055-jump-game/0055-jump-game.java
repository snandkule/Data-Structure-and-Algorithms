class Solution {
    public boolean canJump(int[] nums) {
        int n=nums[0];
        
        if(nums.length==1)return true;
        
        for(int i=1;i<nums.length;i++){
            if(n-1<0)return false;
            n = Math.max(n-1,nums[i]);
        }
        return true;
        
    }
}