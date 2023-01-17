class Solution {
public:
    string addBinary(string a, string b) {
        
        string ans="";
        
        char carry = '0';
        
        if(a.length()<b.length()){
            ans = a;
            a = b;
            b= ans;
            ans = "";
        }
        
        for(int i=0; i<a.length();i++){
            char x = a[a.length()-i-1],y='0';
            if(i<b.length()){
                y = b[b.length()-1-i];
            }
            
            string s="";
            s.push_back(x);
            s.push_back(y);
            s.push_back(carry);
            //a and b , c
            // 0 0 0 -> 0 0
            if(s=="000"){
                ans.push_back('0');
            }else if(s=="001"||s=="010"||s=="100"){
                ans.push_back('1');
                carry = '0';
            }else if(s=="110"||s=="011"||s=="101"){
                ans.push_back('0');
                carry = '1';
            }else{
                ans.push_back('1');
            } 
        }
        if(carry=='1')
            ans.push_back(carry);
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};