class Solution {
    public int[] countBits(int n) {
        int[] arr= new int[n+1];
        for(int i=1;i<=n;i++){
            int t=i;
            while(t>0){
                arr[i]+=t&1;
                t>>=1;
            }
        }
        return arr;
    }
}