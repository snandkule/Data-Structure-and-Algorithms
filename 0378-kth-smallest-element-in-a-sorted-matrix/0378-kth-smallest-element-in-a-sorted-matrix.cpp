class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        vector<int> nums;
        for(auto& a: matrix){
            for(auto& b: a){
                nums.push_back(b);
                // cout<<b<<", ";
            }
        }
        sort(nums.begin(),nums.end());
        return nums[k-1];
        // return 0;
        
    }
};