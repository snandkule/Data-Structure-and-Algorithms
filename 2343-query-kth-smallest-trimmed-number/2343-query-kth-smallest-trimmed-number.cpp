class Solution {
public:
    
    int get_max(vector<vector<int>>& queries){
        
        int n = queries[0][1];
        for(int i=0;i<queries.size();i++){
            n = max(n,queries[i][1]);
        }
        return n;
    }
    
    void count_sort(vector<pair<string,int>>& nums_p, int pos){
        
        vector<pair<string,int>> output(nums_p.size());
        
        int i=0, count[10] = {0};
        
        // Store count of occurrences in count[]
        for(int i=0; i<nums_p.size();i++){
            count[nums_p[i].first[pos]-'0']++;
        }
  
    // Change count[i] so that count[i] now contains actual
    //  position of this digit in output[]
        for(int j=1;j<10;j++){
            count[j]+=count[j-1];
        }
  
    // Build the output array
        for(int j=nums_p.size()-1;j>=0;j--){
            
            output[count[nums_p[j].first[pos]-'0']-1] = nums_p[j];
            count[nums_p[j].first[pos]-'0']--;
        }
  
    // Copy the output array to arr[], so that arr[] now
    // contains sorted numbers according to current digit
    for (i = 0; i < nums_p.size(); i++)
        nums_p[i] = output[i];
    }
    
    void update_ans(vector<pair<string,int>>& nums_p,vector<int>& ans, vector<vector<int>>& queries, int pos){
           for(int i=0;i<queries.size();i++){
            if(queries[i][1] == pos){
                ans[i] = nums_p[queries[i][0]-1].second;
            }
        }
        
    }
    
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int> ans(queries.size(),0);
        vector<pair<string,int>> nums_p(nums.size());
        for(int i=0;i<nums.size();i++){
            nums_p[i] = {nums[i],i};
        }
        int n = get_max(queries);
        
        for(int i=1;i<=n;i++){
            count_sort(nums_p, nums[0].length()-i);
            // cout<<"pos ="<<i<<endl;
            // for(auto& st:nums){
            //     cout<<st<<", ";
            // }
            // cout<<endl;
            update_ans(nums_p,ans,queries,i);
        }
        return ans;
        
    }
};