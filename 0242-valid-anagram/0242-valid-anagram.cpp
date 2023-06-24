class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length()!=t.length())return false;
        vector<int> m1(26,0);
        vector<int> m2(26,0);
        
        for(int i=0;i<s.length();i++){
            m1[s[i]-'a']++;
             m2[t[i]-'a']++;
        }
        
         for(int i=0;i<26;i++){
            if(m2[i] != m1[i])return false;
        }
   
        return true;
        
    }
};