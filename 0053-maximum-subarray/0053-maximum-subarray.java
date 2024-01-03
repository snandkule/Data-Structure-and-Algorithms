class Solution {
    public int maxSubArray(int[] nums) {
        if(nums.length==1)return nums[0];
        int ans=nums[0];
        int curr = nums[0];
        
        for(int i=1;i<nums.length;i++){
            // System.out.println(i+", curr="+curr);
            if( curr+nums[i]<nums[i]){
                ans = Math.max(ans,curr);
                curr=nums[i];
            }else{
                curr+=nums[i];
            }
            ans = Math.max(ans,curr);
        }
        // ans = Math.max(ans,curr);
        return ans;
    }
}