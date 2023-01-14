class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int ans =0;
        
        vector<bool> visited(nums.size(),false);
        
        for(int i=0; i<nums.size()-1;i++){
            if(visited[i])continue;
            long long target = nums[i];
            visited[i] = true;
            int cnt = 1;
            while(1){
                target*=target;
                
                if(target>nums[nums.size()-1])break;
                
                int lo = i+1, hi = nums.size()-1, mid;
                bool fl = false;
                
                while(lo<=hi){
                    mid = (lo+hi)/2;
                    
                    if(nums[mid]==target){
                        visited[mid] = true;
                        fl = true;
                        break;
                    }else if (nums[mid]<target){
                        lo = mid+1;
                    }else{
                        hi = mid-1;
                    }
                }
                if(fl){
                    cnt++;
                }else{
                    break;
                }
                
            }
            ans = max(cnt,ans);
            
        }
        
        if(ans<=1)return -1;
        return ans;
        
    }
};