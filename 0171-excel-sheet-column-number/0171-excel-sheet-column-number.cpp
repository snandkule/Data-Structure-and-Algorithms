class Solution {
public:
    int titleToNumber(string columnTitle) {

        long long int ans=0;

   
        int sz = columnTitle.length()-1;
        for(int i = sz; i>=0; i--){

            ans += pow(26,sz-i) * ((columnTitle[i]-'A')+1);
        
        }
        return ans;
        
    }
};