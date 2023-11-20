class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        map<int,int> m1;
        for(int i=0;i<nums.size();i++){
            m1[nums[i]] = i;
        }
        set<vector<int>> ans;
        for(int i=0;i<nums.size()-1;i++){
            if(i>1 && nums[i]==nums[i-1])continue;
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1 && nums[j]==nums[j-1])continue;
                if(m1.find((-1)*(nums[i]+nums[j]))!=m1.end() && m1[(-1)*(nums[i]+nums[j])]!=i && m1[(-1)*(nums[i]+nums[j])]!=j){
                    vector<int> tmp(3,0);
                    tmp[0]=nums[i];
                    tmp[1]=nums[j];
                    tmp[2]=(-1)*(nums[i]+nums[j]);
                    sort(tmp.begin(),tmp.end());
                    ans.insert(tmp);
                }
            }
            
        }
        vector<vector<int>> t(ans.begin(),ans.end());
        return t;
        
    }
};