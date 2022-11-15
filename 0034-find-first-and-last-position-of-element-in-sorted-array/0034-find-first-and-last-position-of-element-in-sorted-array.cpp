class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        long start =0, end = nums.size()-1;
        
        long start_pos = -1, end_pos = -1;
        
        while(start<=end){
            
            long mid = (start+end)/2;
            // cout<<"1 start="<<start<<", end ="<<end<<" ,mid = "<<mid<<endl;
            if(nums[mid]==target){
                if(mid==0 || nums[mid-1]!=target){
                    start_pos = mid;
                    break;
                }
                end = mid-1;
            }else if(nums[mid]<target){
                start = mid+1;
            }else{
                end = mid -1;
            }
        }
        // cout<<start_pos<<endl;
        vector<int> ans(2,-1);
        if(start_pos == -1)return ans;
        ans[0] = start_pos;
        start = start_pos;
        end = nums.size()-1;
        
          while(start<=end){
            
            long mid = (start+end)/2;
            
            if(nums[mid]==target){
                if(mid==nums.size()-1 || nums[mid+1]!=target){
                    end_pos = mid;
                    break;
                }
                start = mid+1;
            }else if(nums[mid]<target){
                start = mid+1;
            }else{
                end = mid -1;
            }
        }
        ans[1] = end_pos;
        return ans;
        
        
    }
};