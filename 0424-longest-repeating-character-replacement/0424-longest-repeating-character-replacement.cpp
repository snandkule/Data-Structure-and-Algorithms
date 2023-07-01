class Solution {
public:
    bool checkValid(vector<int> &arr,int k,int start,int curr){
        
        int maxe = 0;
        for(int i=1;i<26;i++){
            if(arr[i]>arr[maxe]){
                maxe=i;
            }
        }
        if(curr-start+1-arr[maxe]>k){
            return false;
        }
        return true;
    }
    int characterReplacement(string s, int k) {
        vector<int> arr(26,0);
        
        int start =0;
        int ans=0;
        int curr=0;
        while(curr<s.length()){
            
            arr[s[curr]-'A']++;
            if(!checkValid(arr,k,start,curr)){
                arr[s[start]-'A']--;
                ans = max(ans,curr-start);
                start++;
            }
            curr++;
        }
        if(checkValid(arr,k,start,curr-1)){
             ans = max(ans,curr-start);
        }
        return ans;
    }
};