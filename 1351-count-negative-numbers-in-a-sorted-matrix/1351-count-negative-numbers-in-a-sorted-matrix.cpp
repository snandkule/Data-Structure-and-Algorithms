class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int ans = 0;
        
        for(int i=0;i<grid.size();i++){
            
            int lo = 0, hi = grid[i].size()-1,mid=0;
            int pos =-1;
            while(lo<hi){
                
                mid = (lo + hi)/2;
                if(grid[i][mid]>=0){
                    if(mid+1<grid[i].size() && grid[i][mid+1]<0){
                        pos = mid;
                        break;
                    }
                    lo = mid+1;
                }else{
                 hi = mid;
                }
            }
            if(pos ==-1 && grid[i][0]>=0)
                pos = grid[i].size() - 1;
            else if(pos ==-1 && grid[i][0]<0)
                pos = -1;
            cout<<pos<<endl;
            ans+=(grid[i].size() - 1-pos);
        }
        return ans;
        
    }
};