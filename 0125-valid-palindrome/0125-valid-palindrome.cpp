class Solution {
public:
    bool isPalindrome(string s) {
        
        int i=0,j = s.length()-1;
        for(int k=0;k<s.length();k++){
              if(s[k]>='A' && s[k]<='Z'){
                  s[k] = 'a' + (s[k]-'A');
              }
        }
        while(i<=j){
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