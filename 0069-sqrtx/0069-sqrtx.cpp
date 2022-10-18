#define ll long long int
class Solution {
public:
    int mySqrt(int A) {
        
        
  


    if(A<=1)return A;
    ll start = 2, end =A;
    
    while(start<=end){
        ll mid = (start+end)/2;
        if(mid*mid ==A)return mid;
        else if(mid*mid>A){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    
    return end;
    }
};