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
        vector<string> ar;
        string tmp="";
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=' '){
                tmp.push_back(s1[i]);
            }else{
                ar.push_back(tmp);
                // cout<<tmp<<endl;
                tmp="";
            }
        }
        if(tmp.length()>0)
            ar.push_back(tmp);
        
        tmp="";
        for(int i=0;i<s2.length();i++){
            if(s2[i]!=' '){
                tmp.push_back(s2[i]);
            }else{
                ar.push_back(tmp);
                // cout<<tmp<<endl;
                tmp="";
            }
        }
        if(tmp.length()>0)
            ar.push_back(tmp);
     
        
    
        map<string,int> m1;
        
        for(int i=0;i<ar.size();i++){
          if(m1.find(ar[i])==m1.end())
          {
              m1[ar[i]]=1;
            }else{
              m1[ar[i]]++;
          }
        }
         for(int i=0;i<ar.size();i++){
             // cout<<ar[i]<<", "<<m1[ar[i]]<<endl;
         if(m1[ar[i]]==1)
             ans.push_back(ar[i]);
          
        }
        
        return ans;
        
    }
};