class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        long long int s = (nums.size() +1)*nums.size()*0.5;
        
        for(auto& v:nums)s-=v;
        return s;
        
    }
};