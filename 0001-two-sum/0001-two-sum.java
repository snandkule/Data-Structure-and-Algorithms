class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] ans = new int[2];
        Map<Integer, Integer> m1= new HashMap<>();
        for(int i=0;i<nums.length;i++){
            if(m1.containsKey(target - nums[i])){
                ans[0] = m1.get(target - nums[i]);
                ans[1] = i;
                return ans;
            }
            m1.put(nums[i],i);
        }
        return ans;

    }
}