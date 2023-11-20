class Solution {
public:
    bool isPalindrome(string s) {
        
        int i=0,j = s.length()-1;
      
        while(i<=j){
            if(s[i]>='A' && s[i]<='Z'){
                  s[i] = 'a' + (s[i]-'A');
              }
            if(s[j]>='A' && s[j]<='Z'){
                  s[j] = 'a' + (s[j]-'A');
              }
            if(!((s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9'))){
                i++;
                continue;
            }
            if(!((s[j]>='a' && s[j]<='z')||(s[j]>='0' && s[j]<='9'))){
                j--;
                continue;
            }
            // cout<<s[i]<<","<<s[j]<<endl;
            if(s[i]==s[j]){
                i++;
                j--;
                continue;
            }
            return false;
        }
        return true;
        
    }
};