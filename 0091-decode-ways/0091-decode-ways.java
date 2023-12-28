class Solution {
    public int numDecodings(String s) {
        
        int[] arr = new int[s.length()+1];
        for(int i=0;i<s.length();i++){
            arr[i]=0;
            if(s.charAt(i)-'1'>=0 && s.charAt(i)-'1'<=8){
                if(i>0)
                arr[i]+=arr[i-1];
                else
                    arr[i]=1;
            }
            if(i>0){
                if(s.charAt(i-1)>='1' && s.charAt(i-1)<='2'){
                    if(s.charAt(i-1)=='2'){
                        if(s.charAt(i)>='0' && s.charAt(i)<='6'){
                            if(i>1)
                                arr[i]+=arr[i-2];
                            else
                                arr[i]+=1;
                        }
                    }else{
                        if(i>1)
                                arr[i]+=arr[i-2];
                            else
                                arr[i]+=1;
                    }
                }
            }
        }
        return arr[s.length()-1];
        
        
        
    }
}