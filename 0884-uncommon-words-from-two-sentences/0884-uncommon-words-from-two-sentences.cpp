class Solution {
public:
    
    vector<string> getarr(string s){
        vector<string> ar;
        string tmp="";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                tmp.push_back(s[i]);
            }else{
                ar.push_back(tmp);
                // cout<<tmp<<endl;
                tmp="";
            }
        }
        if(tmp.length()>0)
            ar.push_back(tmp);
        return ar;
    }
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        
        
        vector<string> ans;
        map<string,int> m1;
    
        string tmp="";
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=' '){
                tmp.push_back(s1[i]);
            }else{
                m1[tmp]++;
                // cout<<tmp<<endl;
                tmp="";
            }
        }
        if(tmp.length()>0)
             m1[tmp]++;
        
        tmp="";
        for(int i=0;i<s2.length();i++){
            if(s2[i]!=' '){
                tmp.push_back(s2[i]);
            }else{
                 m1[tmp]++;
                // cout<<tmp<<endl;
                tmp="";
            }
        }
        if(tmp.length()>0)
             m1[tmp]++;
     
        
    
       
        
        for(auto& e:m1){
           if(e.second==1)
             ans.push_back(e.first);
        }
         
        
        return ans;
        
    }
};