class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end()); sort(t.begin(), t.end()); return s == t;
//         if(s.length()!=t.length())return false;
//         int m1[26];
//         int m2[26];
//          for(int i=0;i<26;i++){
//             m1[i]=0;
//              m2[i]=0;
//         }
        
//         for(int i=0;i<s.length();i++){
//             m1[s[i]-'a']++;
//              m2[t[i]-'a']++;
//         }
        
//          for(int i=0;i<26;i++){
//             if(m2[i] != m1[i])return false;
//         }
   
//         return true;
        
    }
};