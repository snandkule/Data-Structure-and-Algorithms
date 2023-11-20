class Solution {
public:
    
    bool static customComparator(const pair<int,int>& a1, const pair<int,int>& b1){
        if(a1.first!=b1.first){
            return a1.first > b1.first;
        }
        return a1.second< b1.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //unordered_map<int,int> m1;
        vector<int> darr(20003,0);
        for(int i=0;i<nums.size();i++){
            // if(m1.find(nums[i])!=m1.end())
            //     m1[nums[i]]++;
            // else{
            //     m1[nums[i]] = 1;
            // }
            darr[nums[i]+10000]++;
        }
        vector<pair<int,int>> v1;
        
        for(int i=0;i<nums.size();i++){
            v1.push_back(make_pair(darr[nums[i]+10000],nums[i]));
        }
        sort(v1.begin(),v1.end(), customComparator);
        
        vector<int> ans;
        
        int cnt=0,i=0;
        int prev = 100000;
        while(cnt<k && i<v1.size()){
            // cout<<prev<<", v1[i] ="<<v1[i].second<<endl;
            if(prev!=v1[i].second){
                ans.push_back(v1[i].second);
                prev = v1[i].second;
                cnt++;
            }
            i++;
            
            
        }
        return ans;
    }
};