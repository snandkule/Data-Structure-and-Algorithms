class Solution {
    public int maxSubArray(int[] nums) {
//         if(nums.length==1)return nums[0];
//         int ans=nums[0];
//         int curr = nums[0];
        
//         for(int i=1;i<nums.length;i++){
//             // System.out.println(i+", curr="+curr);
//             if( curr+nums[i]<nums[i]){
//                 ans = Math.max(ans,curr);
//                 curr=nums[i];
//             }else{
//                 curr+=nums[i];
//             }
//             ans = Math.max(ans,curr);
//         }
//         return ans;
         int n = nums.length;
        int max = Integer.MIN_VALUE, sum = 0;
        
        for(int i=0;i<n;i++){
            sum += nums[i];
            max = Math.max(sum,max);
            
            if(sum<0) sum = 0;
        }
        
        return max;
    }
}