class Solution {
    public int findMin(int[] nums) {
        if(nums[0]<=nums[nums.length-1])return nums[0];

        int i=0,j=nums.length-1,mid=0;
        // int ans = Integer.MAX_VALUE;
        while(i<=j){
            
            mid = (i+j)/2;
            if (mid > 0 && nums[mid] < nums[mid - 1]) {
                return nums[mid];
            }
            // System.out.println("i =" + i+ ", mid = "+mid+", j = "+j);
            if(nums[mid]>=nums[i] && nums[mid]>=nums[j]){
                i=mid+1;
            }else{
                j=mid-1;
            }

        }
        return nums[i];
    }
}