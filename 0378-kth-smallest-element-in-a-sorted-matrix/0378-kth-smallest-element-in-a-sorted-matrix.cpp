class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        if(k==1)return matrix[0][0];
        int n = matrix.size();
        if(k==(n*n))return matrix[n-1][n-1];
        
        
        
        
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