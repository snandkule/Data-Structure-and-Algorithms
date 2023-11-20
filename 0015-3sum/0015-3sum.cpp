class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> ans;
             
        for(int i=0;i<nums.size()-2;i++){
             if(i>0&& nums[i]==nums[i-1]){
                       continue;
            }
            int target = (-1)* nums[i];
            int start = i+1;
            int end = nums.size()-1;
            
            while(start<end){
                if(nums[start]+nums[end]<target){
                    start++;
                }else if(nums[start]+nums[end]>target){
                    end--;
                }else{
                    vector<int> triplet(3);
                    triplet[0]=nums[i];
                    triplet[1]=nums[start];
                    triplet[2]=nums[end];
                    ans.push_back(triplet);
                    
                    while(start<end && nums[start]==triplet[1]){
                        start++;
                    }
                    while(start<end && nums[end]==triplet[2]){
                        end--;
                    }
                }
            }
           
        }
        return ans;
       
    }
};