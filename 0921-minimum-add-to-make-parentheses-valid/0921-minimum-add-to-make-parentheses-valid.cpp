class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int open=0,close=0;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')open++;
            else{
                if(open>0)open--;
                else{
                    ans++;
                }
            }
                
        }
        ans +=open;
        return ans;
    }
};