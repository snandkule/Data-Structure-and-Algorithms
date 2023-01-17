class Solution {
public:
    string reformatNumber(string number) {
        
        string nums = "";
        
        for(auto& ch: number){
            if(ch>='0'&&ch<='9'){
                nums.push_back(ch);
            }
        }
        
        string ans = "";
        int len = nums.length();
        int lim = len;
        if(len%3==1)lim = len-4;
        for(int i=0;i<lim;i++){
            
            if(i>0 && i%3==0){
                ans.push_back('-');
            }
            ans.push_back(nums[i]);
            
        }
        
        if(len%3==0 || len%3==2){
            return ans;
        }
        if(len>4)
            ans.push_back('-');
        ans.push_back(nums[lim]);
        ans.push_back(nums[lim+1]);
        ans.push_back('-');
        ans.push_back(nums[lim+2]);
        ans.push_back(nums[lim+3]);
        return ans;
        
    }
};