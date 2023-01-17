class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        
        vector<int> s1(26,0);
        
        for(int i=0; i< s.length(); i++){
            
            s1[s[i]-'a']++;
        }
        
        int ans = 0;
        for(int i=0;i<s.length();i++){
            
            for(int j=0;j<target.length();j++){
                
                if(s1[target[j]-'a']==0)return ans;
                s1[target[j]-'a']--;
            }
            ans++;
        }
        return ans;
    }
};