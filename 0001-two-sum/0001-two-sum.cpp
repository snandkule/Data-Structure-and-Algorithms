class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
            map<int,int> m1;
        vector<int> ans(2);
        for(int i=0;i<nums.size();i++){
            if(m1.find(target-nums[i])!=m1.end()){
                ans[0]=m1[target-nums[i]];
                ans[1]=i;
                return ans;
            }
            m1[nums[i]]=i;
        }
        return ans;
    }
};