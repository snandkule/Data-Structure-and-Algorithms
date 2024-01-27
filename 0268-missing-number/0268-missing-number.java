class Solution {
    public int missingNumber(int[] nums) {
        int exp=((nums.length)*(nums.length+1))/2;
        for(int i=0;i<nums.length;i++){
           exp-=nums[i];
        }
        return exp;
        
    }
}