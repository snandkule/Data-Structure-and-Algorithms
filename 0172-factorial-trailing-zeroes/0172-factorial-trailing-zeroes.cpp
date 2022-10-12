class Solution {
public:
    int trailingZeroes(int A) {
        
       int i =5;
    int ans = 0;
    while(A>=i){
        int x = A/i ;
        ans+=x;
        i*=5;
    }
    return ans;
        
    }
};