class Solution {
public:
    int fib(int n) {

        int n1 = 0, n2 =1;
        if(n==0)return n1;
        if(n==1) return n2;
        for(int i=2;i<=n;i++){
            int tmp = n1 + n2;
            n1 = n2;
            n2 = tmp;
        }
        return n2;
        
    }
};