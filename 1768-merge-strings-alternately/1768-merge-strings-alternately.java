class Solution {
    public String mergeAlternately(String word1, String word2) {
        
        StringBuilder ans = new StringBuilder();
        int i=0,m=word1.length(),n=word2.length();
        while(i<m && i<n){
            ans.append(word1.charAt(i));
             ans.append(word2.charAt(i));
            i++;
        }
        if(i<m){
            ans.append(word1.substring(i));
        }
        if(i<n){
            ans.append(word2.substring(i));
        }
        return ans.toString();
        
    }
}