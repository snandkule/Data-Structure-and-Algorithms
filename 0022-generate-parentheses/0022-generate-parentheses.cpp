class Solution {
public:
    vector<string> ans;
    
    void genStr(string s, int n1, int n2){
        if(n1>n2)return;
        if(n1==n2 && n1==0){
            ans.push_back(s);
            return;
        }
        if(n1<n2){
            if(n1>0){
                s.push_back('(');
                genStr(s,n1-1,n2);
                s.pop_back();
            }
            if(n2>0){
                s.push_back(')');
                genStr(s,n1,n2-1);
                s.pop_back();
            }   
        }
        if(n1==n2){
            s.push_back('(');
            genStr(s,n1-1,n2);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        genStr("",n,n);
        return ans;
    }
};