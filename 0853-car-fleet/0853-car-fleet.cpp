class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        map<int,int> m1;
        
        for(int i=0;i<position.size();i++){
            m1[position[i]]= speed[i];
        }
        sort(position.begin(),position.end());
        
//         int ans=1;
        
//         int curr=position.size()-1;
        // double curr_time = (double)(target-position[curr])/m1[position[curr]];
        
        stack<float> mono;
        for(int i=0;i<position.size();i++){
            float curr_time =(float)(target-position[i])/(float)m1[position[i]];
            
          
                while(!mono.empty() && mono.top()<=curr_time){
                    mono.pop();
                }
                 mono.push(curr_time);
            
        }
        return mono.size();
        
//           stack<float> mono;
//         for(int i = 0; i<N; i++){
//             float time = 
//                 (target-cars.at(i).pos)/(float)cars.at(i).speed;
//             while(!mono.empty() && time >= mono.top()){
//                 mono.pop();
//             }
//             mono.push(time);
//         }
//         return mono.size();
        // for(int i=curr-1;i>=0;i--){
        //     if(m1[position[i]]<=m1[position[curr]] ){
        //         ans++;
        //         curr=i;
        //         curr_time = (double)(target-position[i])/m1[position[i]];
        //         continue;
        //     }
        //     double time1 =(double)(target-position[i])/m1[position[i]];
        //      if(time1>curr_time)
        //      {
        //          ans++;
        //          curr = i;
        //          curr_time = time1;
        //      }
        // }
        

        // return ans;
    }
};