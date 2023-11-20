class Solution {
public:
    
    int get_cnt(unordered_map<int,int>& m1, vector<int>& cnt_arr, int numbercur){
        
        int cnt=0;
        if(m1.find(numbercur)!=m1.end()){
            if(cnt_arr[m1[numbercur]]!=-1){
                return cnt_arr[m1[numbercur]];
            }
            cnt = 1 + get_cnt(m1, cnt_arr, numbercur+1);
            cnt_arr[m1[numbercur]] = cnt;
        }
        
        return cnt;
        
    }
    int longestConsecutive(vector<int>& nums) {
        
        unordered_map<int,int> m1;
        for(int i=0;i<nums.size();i++){
            m1[nums[i]]=i;
        }
        vector<int> cnt_arr(nums.size(),-1);
        for(int i=0;i<nums.size();i++){
            if(cnt_arr[i]==-1){
                get_cnt(m1, cnt_arr, nums[i]);
            }
        }
        
        
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(cnt_arr[i]!=-1){
                ans = max(ans,cnt_arr[i]);
            }
        }
        return ans;
        
    }
};