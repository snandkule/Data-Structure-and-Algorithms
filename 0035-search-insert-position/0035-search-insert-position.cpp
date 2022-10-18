class Solution {
public:
    int getpos(vector<int>& nums, int target){
        
        long start = 0, end = nums.size()-1;
        
        while(start<=end){
            
            long pos = (start + end)/2;
            
            if(nums[pos]==target)return pos;
            else if(nums[pos]<target)start = pos+1;
            else end = pos -1;
        }
        return end;
    }
    int searchInsert(vector<int>& nums, int target) {
        
        int pos = getpos(nums,target);
        if(pos<0)pos = 0;
        while(pos<nums.size()){
            if(nums[pos]<target)pos++;
            else break;
        }
        
        return pos;
        
    }
};