class Solution {
public:
    void checkAndUpdateAns(vector<int> &tmp, set<vector<int>> &s1, vector<vector<int>> &ans){
       if(s1.find(tmp)==s1.end()){
            ans.push_back(tmp);
           s1.insert(tmp);
       }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
      
    vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        set<vector<int>> s1;
   
        for(int i=0;i<nums.size();i++){
            
            int j=i+1,k=nums.size()-1;
            while(j<k){
                if(nums[j]+nums[k] == -1*nums[i]){
                       vector<int> tmp(3,nums[i]);
                       tmp[1]=nums[j];
                       tmp[2]=nums[k];
                    checkAndUpdateAns(tmp,s1,ans);
                    j++;
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