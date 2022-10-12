class Solution {
public:
    int trailingZeroes(int n) {
        
        long long int twos=0,fives=0;
        
        while(n>1){
            
            int t = n;
            while(t>1){
                if(t%2==0){
                    twos++;
                    t=t/2;
                }else{
                    break;
                }
            }
            while(t>1){
                if(t%5==0){
                    fives++;
                    t=t/5;
                }else{
                    break;
                }
            }
            n--;
        }
        return min(fives,twos);
        
    }
};