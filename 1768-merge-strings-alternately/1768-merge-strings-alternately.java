class Solution {
    public String mergeAlternately(String word1, String word2) {
        
        String ans="";
        int i=0,j=0,m=word1.length(),n=word2.length();
        while(i<m && j<n){
            ans+=word1.charAt(i);
            ans+=word2.charAt(j);
            i++;
            j++;
        }
        if(i<m){
            ans+=word1.substring(i);
        }
        if(j<n){
            ans+=word2.substring(j);
        }
        return ans;
        
    }
}