class Solution {
    public boolean canJump(int[] nums) {
       
        // if(nums.length==1)return true;
        
        for(int i=1;i<nums.length;i++){
            if(nums[i-1]-1<0)return false;
            nums[i] = Math.max(nums[i-1]-1,nums[i]);
        }
        return true;
        
    }
}