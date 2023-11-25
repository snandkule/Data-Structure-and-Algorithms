class Solution {
public:
    // unsigned long  getMax(vector<unsigned long>& arr){
    //     unsigned long cnt=0;
    //     for(unsigned long i=0;i<26;i++){
    //         if(arr[cnt]<arr[i]){
    //             cnt=i;
    //         }
    //     }
    //     return cnt;
    // }
    int characterReplacement(string s, int k) {
        
        int ans=0;
        vector<int> cntarr(26,0);
        int maxf=0;
        
        for(int i=0;i<s.length();i++){
            cntarr[s[i]-'A']++;
            maxf = max(maxf, cntarr[s[i]-'A']); 
            cout<<"ans ="<<ans<<", maxf ="<<maxf<<endl;
            if(ans-maxf<k){
                ans++;
            }else{
                cntarr[s[i-ans]-'A']--;
            }
           
            
        }
       
        return ans;
    }
};