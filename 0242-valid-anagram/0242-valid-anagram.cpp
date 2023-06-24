class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map<char, int> m1;
        map<char, int> m2;
        
        for(int i=0;i<s.length();i++){
            m1[s[i]]++;
        }
        
         for(int i=0;i<t.length();i++){
            m2[t[i]]++;
        }
         for(int i=0;i<t.length();i++){
            if(m2[t[i]] != m1[t[i]])return false;
        }
         for(int i=0;i<s.length();i++){
            if(m2[s[i]] != m1[s[i]])return false;
        }
        return true;
        
    }
};