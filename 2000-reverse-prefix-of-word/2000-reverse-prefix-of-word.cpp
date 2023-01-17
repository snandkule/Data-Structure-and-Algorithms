class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans = "";
        string tmp="";
        bool isch=false;
        for(auto& c:word){
            tmp.push_back(c);
            
            if(c==ch && !isch){
                reverse(tmp.begin(),tmp.end());
                ans+=tmp;
                tmp ="";
                isch = true;
            }
        }
        ans+=tmp;
        return ans;
    }
};