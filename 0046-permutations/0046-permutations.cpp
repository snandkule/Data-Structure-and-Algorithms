class Solution {
public:
    
    void getAns(vector<int> &nums, vector<bool> &visited, vector<int> &tmp,  vector<vector<int>> &ans){
        if(tmp.size()==nums.size()){
            ans.push_back(tmp);
            return;
        }
        if(tmp.size()>nums.size())return;
        
        for(int i=0;i<nums.size();i++){
            if(visited[i]!=true){
                visited[i] = true;
                tmp.push_back(nums[i]);
                getAns(nums,visited,tmp,ans);
                tmp.pop_back();
                visited[i] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        if(nums.size()<=1){
            ans.push_back(nums);
            return ans;
        }
        vector<bool> visited(nums.size(),false);
        vector<int> tmp(0);
        getAns(nums, visited, tmp, ans );
        return ans;
    }
};