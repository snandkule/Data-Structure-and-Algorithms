class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
        sort(arr2.begin(), arr2.end());
        
        int ans =0;
        
        for(int i=0; i< arr1.size(); i++){
            
            int lo =0, hi = arr2.size()-1,mid;
            bool flag = false;
            int st = arr1[i] - d, ed = arr1[i]+d;
            while(lo<=hi){
                
                mid = (lo+hi)/2;
                // cout<<arr2[mid]<<",st = "<<st<<", ed = "<<ed<<endl;
               
                if(arr2[mid]>=st && arr2[mid]<= ed){
                    flag = true;
                    break;
                }else if(arr2[mid]< st){
                    
                    lo= mid +1;
                }else if(arr2[mid]>ed){
                    hi = mid -1;
                }
            }
            // cout<<arr1[i]<<", flag =" << flag<<endl;
            if(!flag)ans++;
        }
        return ans;
        
    }
};