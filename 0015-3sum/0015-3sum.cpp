class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
      
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-2;i++){

            if(i>0 && nums[i]==nums[i-1])continue;
            int j=i+1,k=nums.size()-1;

            while(j<k){
                if(nums[j]+nums[k] == -1*nums[i]){
                       vector<int> tmp(3,nums[i]);
                       tmp[1]=nums[j];
                       tmp[2]=nums[k];
                    ans.push_back(tmp);

                    j++;
                    while(j<k && nums[j]==nums[j-1])j++;
                }else if(nums[j]+nums[k] > -1*nums[i]){
                    k--;
                }else{
                    j++;
                }

            }
        }
        return ans;
        
    }
};