#include <algorithm>
#include <iostream>
class Solution {
public:
    string longestCommonPrefix(vector<string>& A) {
        
    if(A.size()==0)return "";
    int end=A[0].length()-1;
    
    for(int i=1;i<A.size();i++)
    {
        int j=0;
        while(j<=end && j<A[i].length() && A[i][j]==A[0][j]){
            j++;
        }
        if(j==0)return "";
        end = j-1;
    }
    string ans = A[0].substr(0,end+1);
    return ans;       
    }
};