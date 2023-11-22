class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int ans =0;
        
        int i=0,j=height.size()-1;
        
        while(i<j){
            int tmp = (j-i)*min(height[i],height[j]);
            ans = max(ans,tmp);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        return ans;
        
    }
};