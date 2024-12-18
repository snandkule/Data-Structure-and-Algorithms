class Solution {
public:
    int lengthOfLongestSubstring(string s) {
//         int start=0;
//         map<char,bool> m1;
        
//         unsigned long ans=0;
        
//         for(unsigned long i=0;i<s.length();i++){
//             if(m1[s[i]]==false){
//                 m1[s[i]] = true;
//             }else{
//                 ans = max(ans,i-start);
//                 while(m1[s[i]] && start<i){
//                     m1[s[start]] = false;
//                     start++;
//                 }
//                 m1[s[i]] = true;
//             }
//         }
//         ans = max(ans, s.length()-start);
//         return ans;
        vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i != s.length(); i++) {
            if (dict[s[i]] > start)
                start = dict[s[i]];
            dict[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
        
    }
};