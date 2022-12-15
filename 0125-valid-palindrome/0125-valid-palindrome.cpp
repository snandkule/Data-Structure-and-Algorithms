class Solution {
public:
    bool isPalindrome(string A) {
            string B;
    for(int j = 0; j<A.length();j++){
        if((A[j]>=65 && A[j]<=90)||(A[j]>=97 && A[j]<=122) || (A[j]>=48 && A[j]<=57))B.push_back(A[j]);
    }
    int j=0;
    int i= B.length()-1;
    while(i>=j){
            if(tolower(B[i])!=tolower(B[j]))return 0;
            i--;j++;
    }
    
  return 1;
        
    }
};