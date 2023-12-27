class Solution {
    public int rob(int[] nums) {
        if(nums.length==1)return nums[0];
        if(nums.length==2)return Math.max(nums[0], nums[1]);
        int[] rob = new int[nums.length-1];
        
        for(int i=0;i<nums.length-1;i++){
            rob[i] = nums[i];
            if(i>=3){
                rob[i]+= Math.max(rob[i-2],rob[i-3]);
            }else if(i>=2){
                rob[i]+=rob[i-2];
            }
        }
        
        int maxf= Math.max(rob[rob.length-1],rob[rob.length-2]);
        
        for(int i=1;i<nums.length;i++){
            int j=i-1;
            rob[j] = nums[i];
            if(j>=3){
                rob[j]+= Math.max(rob[j-2],rob[j-3]);
            }else if(j>=2){
                rob[j]+=rob[j-2];
            }
        }
        
        int maxs = Math.max(rob[rob.length-1],rob[rob.length-2]);
        return Math.max(maxf, maxs);
    }
}