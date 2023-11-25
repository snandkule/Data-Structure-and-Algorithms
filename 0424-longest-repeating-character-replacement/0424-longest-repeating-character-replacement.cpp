class Solution {
public:
    unsigned long  getMax(vector<unsigned long>& arr){
        unsigned long cnt=0;
        for(unsigned long i=0;i<arr.size();i++){
            cnt = max(cnt, arr[i]);
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
            
            while(start<i && (maxcnt+k < i-start+1)){
                cntarr[s[start]-'A']--;
                start++;
                maxcnt = getMax(cntarr);
            }
                if(maxcnt+k >= i-start+1){
                    ans = max(ans, i-start+1);
                }
            
        }
        // unsigned long maxcnt = getMax(cntarr);
        // cout<<"maxcnt+k ="<<maxcnt+k <<", s.length()-start ="<<s.length()-start<<endl;
        // if(maxcnt+k >= s.length()-start){
        //     ans = max(ans, s.length()-start);
        // }
        return ans;
    }
};