class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        set<int> s1;
        map<int,int> m1;
        vector<int> ans(2,0);
        for(int i=0;i<nums.size();i++){
            if(i==0){
                s1.insert(nums[i]);
                m1[nums[i]]=i;
                continue;
            }
            if(s1.find(target-nums[i])!=s1.end()){
                ans[0] = m1[target-nums[i]];
                ans[1] = i;
                return ans;
            }
            s1.insert(nums[i]);
             m1[nums[i]]=i;
            
        }
        return ans;
        
    }
};