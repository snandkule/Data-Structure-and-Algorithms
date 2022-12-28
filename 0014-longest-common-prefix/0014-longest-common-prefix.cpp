#include <algorithm>
#include <iostream>
class Solution {
public:
    string longestCommonPrefix(vector<string>& A) {
        if(A.size()==0)return "";
    
    string ans = A[0];
    
    for(int i=1;i<A.size();i++){
        
        int j=0;
        
        while(j<ans.length() &&  j<A[i].length() && ans[j]==A[i][j]){
            j++;
        }
        int len = ans.length();
        while(j<len){
            ans.pop_back();
            j++;
        }
    }
    return ans;        
    }
};