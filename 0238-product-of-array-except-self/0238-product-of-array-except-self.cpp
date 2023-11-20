class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        vector<int> postfix(nums.size());
        vector<int> ans(nums.size());
        prefix[0] = nums[0];
        postfix[nums.size()-1] = nums[nums.size()-1];
        
        for(int i=1;i<nums.size();i++){
            prefix[i] = nums[i]*prefix[i-1];
            postfix[nums.size()-i-1] = nums[nums.size()-i-1]*postfix[nums.size()-i];
            // cout<<"prefix[i] ="<<prefix[i]<<", postfix[nums.size()-i-1] ="<<postfix[nums.size()-i-1]<<endl;
        }
        ans[0]= postfix[1];
        ans[nums.size()-1] = prefix[nums.size()-2];
        for(int i=1;i<nums.size()-1;i++){
            ans[i] = postfix[i+1]*prefix[i-1];
        }
        return ans;
        
        
    }
};