class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> ans;
        int j=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                j=i;
            }if(nums[i]>=0)break;
        }
        
        int i = j+1;
        while(j>=0 && i<nums.size()){
            if(nums[i]<abs(nums[j])){
                ans.push_back(nums[i]*nums[i]);
                i++;
            }else{
                ans.push_back(nums[j]*nums[j]);
                j--;
            }
        }
        
        while(j>=0){
            ans.push_back(nums[j]*nums[j]);
                j--;
        }
        while(i<nums.size()){
           ans.push_back(nums[i]*nums[i]);
                i++;
        }
        
        return ans;
    }
};