class Solution {
public:
    
    int minimumDeletions(string s) {
        
        vector<int> prefixcnt_a(s.length(),0);
        vector<int> postfixcnt_b(s.length(),0);
        
        for(int i=0;i<s.length();i++){
            
            if(i>0){
                prefixcnt_a[i]+=prefixcnt_a[i-1];
            }
            if(s[i]=='a'){
                prefixcnt_a[i]++;
            }
            
            if(i>0){
                postfixcnt_b[s.length()-1-i] += postfixcnt_b[s.length()-i];
            }
            if(s[s.length()-1-i]=='b'){
                postfixcnt_b[s.length()-1-i]++;
            }
        }
        
        int ans = s.length();
        
        int tmp = s.length()-postfixcnt_b[0];
           ans = min(ans,tmp);
        // cout<<"postfixcnt_b[0] ="<<postfixcnt_b[0]<<endl;
        tmp = s.length()-prefixcnt_a[s.length()-1];
        // cout<<"prefixcnt_a[s.length()-1] ="<<prefixcnt_a[s.length()-1]<<endl;
        ans = min(ans,tmp);
        
        for(int i=0;i<s.length()-1;i++){
            
           tmp = i+1-prefixcnt_a[i] + (s.length()-(i+1)-postfixcnt_b[i+1]);
            ans = min(ans,tmp);
            // cout<<"i = "<<i<<", cnt a = "<<prefixcnt_a[i] << ", cnt b ="<<postfixcnt_b[i+1]<<", tmp = "<<tmp<<endl;
        }
        return ans;
    }
};