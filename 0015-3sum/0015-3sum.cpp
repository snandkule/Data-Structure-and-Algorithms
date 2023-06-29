class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
      
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-2;i++){
            
            int target = nums[i]*-1;
            int front = i+1;
            int back = nums.size()-1;
        
            while(front<back){
               if(nums[front]+nums[back] > target){
                    back--;
                }else if(nums[front]+nums[back] < target){
                    front++;
                }else{
                       vector<int> tmp(3,nums[i]);
                       tmp[1]=nums[front];
                       tmp[2]=nums[back];
                       ans.push_back(tmp);

                    
                    while(front<back && nums[front]==tmp[1])front++;
                   while(front<back && nums[back]==tmp[2])back--;
                }
            }
            while(i<nums.size()-1 && nums[i]==nums[i+1])i++;
            
        }
        return ans;
        
    }
};