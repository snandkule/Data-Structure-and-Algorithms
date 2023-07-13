class Solution {
public:
    
  
    
void genString(int A, int op, int cl, string &curr, vector<string> &ans)
{
    if(op==A && cl==A){
        ans.push_back(curr);
        return;
    }
    if(op<A){
        curr.push_back('(');
        genString(A,op+1,cl,curr,ans);
        curr.pop_back();
    }
    if(cl<A && cl<op){
        curr.push_back(')');
        genString(A,op,cl+1,curr,ans);
        curr.pop_back();
    }
}
vector<string> generateParenthesis(int A) {
    vector<string> ans(0);
    if(A==0)return ans;
    string tmp="";
    genString(A,0,0,tmp,ans);
    return ans;
}

};