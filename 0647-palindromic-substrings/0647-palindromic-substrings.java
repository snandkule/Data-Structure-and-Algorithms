class Solution {
    int ans = 0;
    public void explore(String s, int j, int k){
        
        while(j>=0&&k<s.length()&&s.charAt(j)==s.charAt(k)){
            ans++;
            j--;
            k++;
        }
    }
    public int countSubstrings(String s) {
        if(s.length()==1)return 1;
        
        for(int i=0;i<s.length();i++){
            explore(s,i,i);
            explore(s,i,i+1);
        }
        return ans;
    }
}