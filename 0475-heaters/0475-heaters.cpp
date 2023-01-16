class Solution {
public:
    bool is_possible(vector<int>& houses, vector<int>& heaters, int r){
        
        int cnt = 0;
        int i=0,j=0;
        while(i<houses.size() && j<heaters.size()){
            
            if(houses[i]>=heaters[j]-r && houses[i]<=heaters[j]+r){
                cnt++;
                i++;
            }else if(houses[i]>heaters[j]+r){
                j++;
            }else if(houses[i]<heaters[j]-r){
                cout<<i<<", "<<j<<", "<<r<<", "<<cnt<<endl;
                return false;
            }
        }
        cout<<r<<", "<<cnt<<endl;
        return cnt==houses.size();
    }
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        int m1=0,m2 = INT_MAX, mid = 0;
        
        // for(auto&a:houses){
        //     m2 = max(m2,a);
        // }
        int ans=m2;
        
        while(m1<=m2){
            
            mid = (m1+m2)/2;
            cout<<"min="<<m1<<", max ="<<m2<<", mid="<<mid<<endl;
            if(is_possible(houses,heaters,mid)){
                ans = min(ans,mid);
                m2 = mid-1;
            }else{
                m1 = mid+1;
            }
        }
        return ans;
        
        
        
    }
};