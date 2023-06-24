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
        
        for(int i=curr-1;i>=0;i--){
            if(m1[position[i]]<=m1[position[curr]] ){
                ans++;
                curr=i;
                continue;
            }
            double time1 =(double)(target-position[i])/m1[position[i]];
            double time2 =(double)(target-position[curr])/m1[position[curr]];
             if(time1>time2)
             {
                 ans++;
                 curr = i;
             }
        }
        
        
//         while(i>0){
//             int j=i-1;
//             while(j>=0)
//             {
//                 int time1 =ceil((double)(target-position[i])/m1[position[i]]);
//                 int time2 =ceil((double)(target-position[j])/m1[position[j]]);
//                 if(time1<=time2)
//                 {
//                     i=j;
//                     j++;
//                 }else{
//                     ans+=1;
//                     break;
//                 }
//             }
//             i=j;
            
//         }
        return ans;
    }
};