class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
     sort(nums.begin(),nums.end());
    
        for (int i=1;i<nums.size();i++){
            
            nums[i] = nums[i] + nums[i-1];
        }
        
        vector<int> ans(queries.size(),0);
        
        for(int j=0;j<queries.size();j++){
            
            
            int target = queries[j];
            int lo = 0, hi = nums.size()-1, mid=0;
            
            while(lo<=hi){
                mid = (lo+hi)/2;
                
                if(nums[mid]<= target){
                    lo = mid+1;
                }else{
                    hi = mid-1;
                }
            }
            ans[j] = lo;
            
        }
        return ans;
        
    }
};