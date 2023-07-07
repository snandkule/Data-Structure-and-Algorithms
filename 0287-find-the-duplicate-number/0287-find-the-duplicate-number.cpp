class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
     unordered_set<int> s1;
        
        for(int i=0;i<nums.size();i++){
            if(s1.count(nums[i]))return nums[i];
            s1.insert(nums[i]);
        }
        return -1;
        
        
        
        
    }
};