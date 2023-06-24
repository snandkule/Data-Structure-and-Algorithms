class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        map<int,int> m1;
        
        for(int i=0;i<position.size();i++){
            m1[position[i]]= speed[i];
        }
        sort(position.begin(),position.end());
        
        int ans=1;
        
        int curr=position.size()-1;
        double curr_time = (double)(target-position[curr])/m1[position[curr]];
        
        for(int i=curr-1;i>=0;i--){
            if(m1[position[i]]<=m1[position[curr]] ){
                ans++;
                curr=i;
                curr_time = (double)(target-position[i])/m1[position[i]];
                continue;
            }
            double time1 =(double)(target-position[i])/m1[position[i]];
             if(time1>curr_time)
             {
                 ans++;
                 curr = i;
                 curr_time = time1;
             }
        }
        

        return ans;
    }
};