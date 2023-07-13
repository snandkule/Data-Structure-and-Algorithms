class Solution {
public:
//     vector<string> letterCombinations(string digits) {
        
//     }
    void genString(string A, int i, string curr, vector<string> &phone, vector<string> &ans ){
    
    if(i==A.size()){
        ans.push_back(curr);
        return;
    }
    for(int j=0;j<phone[A[i]-'0'].size();j++){
        curr.push_back(phone[A[i]-'0'][j]);
        genString(A,i+1,curr,phone,ans);
        curr.pop_back();
    }
}


vector<string> letterCombinations(string A) {
    
    vector<string> phone(10,"0");
    phone[1]="1";
    phone[2] ="abc";
    phone[3] ="def";
    phone[4] ="ghi";
    phone[5] ="jkl";
    phone[6] ="mno";
    phone[7] ="pqrs";
    phone[8] ="tuv";
    phone[9] ="wxyz";
 
    vector<string> ans(0);
    if(A.length()==0)return ans;
    genString(A,0,"",phone,ans);
    return ans;
}
};