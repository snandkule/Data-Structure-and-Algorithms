public class Solution {
    // you need treat n as an unsigned value
    public int reverseBits(int n) {
        long ans=0;
        int i=0;
        while(i<32){
            // System.out.println(n&1);
            ans+=n&1;
            ans<<=1;
            n>>=1;
            i++;
        }
        ans>>=1;
        return (int)ans;
        
    }
}