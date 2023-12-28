class Solution {
    public int lengthOfLIS(int[] nums) {
        
        int arr[] = new int[nums.length];
        int ans= 1;
        for(int i=0;i<nums.length;i++)arr[i]=1;
        
        int j=0;
        
        for(int i=1;i<nums.length;i++){
            
            j=0;
            while(j<i){
                if(nums[j]<nums[i]){
                    arr[i]=Math.max(arr[i],arr[j]+1);
                }
                j++;
            }
            ans = Math.max(ans,arr[i]);
        }
        
        return ans;
    }
    
}