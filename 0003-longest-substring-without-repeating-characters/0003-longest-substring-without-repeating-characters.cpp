class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int start =0,curr=0,ans=0;
        
        vector<int> arr(120,0);
        
        while(curr<s.length()){
            
            if(arr[s[curr]-' ']==0){
                arr[s[curr]-' ']=1;
            }else{
                ans = max(ans, curr-start);
                while(arr[s[curr]-' ']==1){
                    arr[s[start]-' ']=0;
                    start++;
                }
                arr[s[curr]-' ']=1;
            }
            curr++;
        }
        ans = max(ans, curr-start);
        return ans;
        
    }
};