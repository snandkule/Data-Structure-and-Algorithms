class Solution {
    public int rob(int[] nums) {
        if(nums.length==1)return nums[0];
        int[] rob = new int[nums.length];
        
        for(int i=0;i<nums.length;i++){
            rob[i] = nums[i];
            if(i>=3){
                rob[i]+= Math.max(rob[i-2],rob[i-3]);
            }else if(i>=2){
                rob[i]+=rob[i-2];
            }
        }
        
        return Math.max(rob[nums.length-1],rob[nums.length-2]);
        
    }
}