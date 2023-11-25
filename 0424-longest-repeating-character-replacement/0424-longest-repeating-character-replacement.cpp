class Solution {
public:
    unsigned long  getMax(vector<unsigned long>& arr){
        unsigned long cnt=0;
        for(unsigned long i=0;i<arr.size();i++){
            if(arr[cnt]<arr[i]){
                cnt=i;
            }
        }
        return cnt;
    }
    int characterReplacement(string s, int k) {
        
        unsigned long ans=0;
        vector<unsigned long> cntarr(26,0);
        unsigned long start=0;
        
        for(unsigned long i=0;i<s.length();i++){
            
            
            cntarr[s[i]-'A']++;
            unsigned long maxcnt = getMax(cntarr);  
            
            while(cntarr[maxcnt]+k < i-start+1){
                cntarr[s[start]-'A']--;
                if(maxcnt==s[start]-'A')
                    maxcnt = getMax(cntarr);
                start++;
            }
                // if(maxcnt+k >= i-start+1){
                    ans = max(ans, i-start+1);
                // }
            
        }
       
        return ans;
    }
};