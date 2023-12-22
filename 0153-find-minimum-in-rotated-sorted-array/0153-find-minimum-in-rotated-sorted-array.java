class Solution {
    public int findMin(int[] nums) {
        if(nums[0]<=nums[nums.length-1])return nums[0];

        int i=0,j=nums.length-1,mid=0;
        int ans = Integer.MAX_VALUE;
        while(i<=j){
            
            mid = (i+j)/2;
            // System.out.println("i =" + i+ ", mid = "+mid+", j = "+j);
            if(nums[mid]<=nums[j]){
                ans = Math.min(ans,nums[mid]);
                j=mid-1;
            }else{
                i=mid+1;
            }

        }
        return ans;
    }
}