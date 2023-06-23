class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int,bool> s1;
        for(int i=0;i<nums.size();i++){
            if(s1[nums[i]])return true;
            s1[nums[i]] = true;
        }
        return false;
        
    }
};