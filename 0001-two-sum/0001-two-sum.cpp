class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
     
        unordered_map<int,int> m1;
        vector<int> ans(2,0);
        m1[nums[0]]=0;
        for(int i=1;i<nums.size();i++){
            if(m1.find(target-nums[i])!=m1.end()){
                ans[0] = m1[target-nums[i]];
                ans[1] = i;
                return ans;
            }
             m1[nums[i]]=i;
            
        }
        return ans;
        
    }
};