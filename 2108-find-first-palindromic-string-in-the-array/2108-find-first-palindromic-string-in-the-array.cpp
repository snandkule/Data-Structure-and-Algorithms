class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(auto& st: words){
            
            string tmp = st;
            reverse(st.begin(),st.end());
            
            if(tmp==st)return tmp;
        }
        return "";
        
    }
};