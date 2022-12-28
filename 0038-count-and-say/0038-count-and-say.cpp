class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        
        for(int i=2;i<=n;i++){
            
            string tmp="";
            
            int cnt=1;
            char c=ans[0];
            for(int j=1;j<ans.length();j++){
                
                if(c==ans[j])cnt++;
                else{
                    tmp+=to_string(cnt);
                    tmp.push_back(c);
                    c = ans[j];
                    cnt=1;
                }
            }
            tmp+=to_string(cnt);
            tmp.push_back(c);
            ans = tmp;
        }
        return ans;
    }
};