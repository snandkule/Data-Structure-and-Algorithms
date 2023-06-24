class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> s1;
        int n = temp.size();
        vector<int> ans(n,0);
        s1.push(n-1);
        
        for(int i=n-2;i>=0;i--){
            while(!s1.empty() && temp[s1.top()]<=temp[i]){
                s1.pop();
            }
            if(!s1.empty()){
                ans[i] = s1.top() - i;
            }
             s1.push(i);
        }
        return ans;
    }
};