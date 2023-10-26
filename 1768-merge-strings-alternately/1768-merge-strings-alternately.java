class Solution {
    public String mergeAlternately(String word1, String word2) {
        
        String ans="";
        int i=0,m=word1.length(),n=word2.length();
        while(i<m && i<n){
            ans+=word1.charAt(i);
            ans+=word2.charAt(i);
            i++;
        }
        if(i<m){
            ans+=word1.substring(i);
        }
        if(i<n){
            ans+=word2.substring(i);
        }
        return ans;
        
    }
}