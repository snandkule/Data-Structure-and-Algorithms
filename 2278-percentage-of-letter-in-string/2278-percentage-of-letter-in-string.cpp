class Solution {
public:
    int percentageLetter(string s, char letter) {
        long long int cnt=0;
        for(int i=0; i<s.length();i++){
            if(s[i]==letter)cnt++;
        }
        // cout<<cnt<<endl;
        return int(floor((cnt*100)/s.length()));
        
    }
};