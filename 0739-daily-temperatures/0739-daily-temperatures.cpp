class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int,int>> s1;
        int n = temp.size();
        vector<int> ans(n,0);
        
        s1.push(make_pair(temp[n-1],n-1));
        
        for(int i=n-2;i>=0;i--){
            
            while(!s1.empty() && s1.top().first<temp[i]){
                s1.pop();
            }
            
            if(!s1.empty()){
                if(s1.top().first==temp[i]){
                    if(ans[s1.top().second]!=0){
                        ans[i] = s1.top().second - i;
                        ans[i]+=ans[s1.top().second];
                    }else{
                        ans[i]=0;
                    }
                     
                }else{
                     ans[i] = s1.top().second - i;
                }
               
            }
             s1.push(make_pair(temp[i],i));
        }
        return ans;
    }
};