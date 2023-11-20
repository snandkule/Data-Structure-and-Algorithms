class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> sarr(26,0);
        vector<int> tarr(26,0);
        if(s.length()!=t.length())return false;
        for(int i=0;i<s.length();i++){
            sarr[s[i]-'a']++;
            tarr[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(sarr[i]!=tarr[i])return false;
        }
        return true;
    }
    
};