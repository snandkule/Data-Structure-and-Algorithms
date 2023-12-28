class Solution {
    public int numDecodings(String s) {
        
        // int[] arr = new int[s.length()+1];
        int prev=0, prev2=0;
        for(int i=0;i<s.length();i++){
            int curr=0;
            // arr[i]=0;
            if(s.charAt(i)-'1'>=0 && s.charAt(i)-'1'<=8){
                if(i>0)
                curr+=prev;
                else
                    curr=1;
            }
            if(i>0){
                if(s.charAt(i-1)=='2'){
                    if(s.charAt(i)>='0' && s.charAt(i)<='6'){
                        if(i>1)
                            curr+=prev2;
                        else
                            curr+=1;
                    }
                }else if(s.charAt(i-1)=='1'){
                    if(i>1)
                            curr+=prev2;
                        else
                            curr+=1;
                }
            }
            prev2 = prev;
            prev = curr;
        }
        return prev;
        
        
        
    }
}