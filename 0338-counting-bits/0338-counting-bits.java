class Solution {
    public int[] countBits(int n) {
        int[] arr= new int[n+1];
        for(int i=1;i<=n;i++){
            int ans=0, t=i;
            while(t>0){
                ans+=t&1;
                t>>=1;
            }
            arr[i]=ans;
        }
        return arr;
    }
}