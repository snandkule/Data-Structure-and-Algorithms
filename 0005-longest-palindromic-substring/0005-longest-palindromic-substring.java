class Solution {
    
    public String getMax(String s, int i, int j){
        
        while(i>=0 && j<s.length()){
            if(s.charAt(i)==s.charAt(j)){
                i--;j++;
            }else{
                return s.substring(i+1,j);
            }
        }
        return s.substring(i+1,j);
    }
    
    
    public String longestPalindrome(String s) {
        
        String ans = ""+s.charAt(0);
        for(int i=0;i<s.length();i++){
            String t = getMax(s, i,i);
            String t2 = getMax(s,i,i+1);
            if(t.length()>ans.length()){
                ans=t;
            }
            if(t2.length()>ans.length()){
                ans=t2;
            }
        }
        return ans;
        
    }
}