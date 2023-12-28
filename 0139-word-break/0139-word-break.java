class Solution {
    public boolean wordBreak(String s, List<String> wordDict) {
        
        boolean[] arr = new boolean[s.length()];
        
        int n=0;
        for(String x:wordDict){
            n = Math.max(n,x.length());
        }
        for(int i=0;i<s.length();i++){
            String t="";
            for(int j=0;j<n && i-j>=0;j++){
                t = s.charAt(i-j)+t;
                if(wordDict.contains(t)){
                    if(i-j-1>=0){
                        if(arr[i-j-1]){
                            arr[i]=true;
                            break;
                        }
                    }else{
                       arr[i]=true;
                       break; 
                    }
                }
            }
        }
        return arr[s.length()-1];
        
        
    }
}