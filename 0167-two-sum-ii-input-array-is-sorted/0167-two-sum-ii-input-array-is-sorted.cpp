class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        
        int i=0;
        int j=numbers.size()-1;
        vector<int> ans(2,1);
        while(i<j){
            
            if(numbers[i]+numbers[j]==target){
                ans[0]+=i;
                ans[1]+=j;
                return ans;
            }else if(numbers[i]+numbers[j]>target){
                j--;
            }else{
                i++;
            }
        }
         return ans;
    }
   
};