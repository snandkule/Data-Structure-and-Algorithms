class Solution {
public:
    bool isAnagram(string s, string t) {
       
        if(s.length()!=t.length())return false;
        int m1[26]={0};
       
        
        for(int i=0;i<s.length();i++){
            m1[s[i]-'a']++;
             m1[t[i]-'a']--;
        }
        
         for(int i=0;i<26;i++){
            if(m1[i] != 0)return false;
        }
   
        return true;
        
    }
};