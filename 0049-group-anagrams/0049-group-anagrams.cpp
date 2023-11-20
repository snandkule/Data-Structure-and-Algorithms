class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        map<string,vector<string>> m1;
        
        for(int i=0;i<strs.size();i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            
                m1[s].push_back(strs[i]);
            
        }
        for (const auto& pair : m1) {
            ans.push_back(pair.second);
        }
        return ans;
        
    }
};