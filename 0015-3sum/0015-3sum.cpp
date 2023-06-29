class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      
    vector<vector<int>> ans;
    
        set<vector<int>> s1;
        unordered_map<int,int> s2;
        s2[nums[0]]=1;
        for(int i=1;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                
                if(s2.find((nums[i]+nums[j])*-1)!=s2.end()){
                     vector<int> tmp(3,nums[i]);
                       tmp[1]=nums[j];
                       tmp[2]=(nums[i]+nums[j])*-1;
                       if(tmp[0]>tmp[1]){
                           int r = tmp[0];
                           tmp[0]=tmp[1];
                           tmp[1]=r;
                       }
                       if(tmp[0]>tmp[2]){
                           int r = tmp[0];
                           tmp[0]=tmp[2];
                           tmp[2]=r;
                       }
                       if(tmp[1]>tmp[2]){
                           int r = tmp[1];
                           tmp[1]=tmp[2];
                           tmp[2]=r;
                       }
                       if(s1.find(tmp)==s1.end()){
                            ans.push_back(tmp);
                           s1.insert(tmp);
                       }
                    
                }
            }
            s2[nums[i]]=1;
        }
        return ans;
        
    }
};