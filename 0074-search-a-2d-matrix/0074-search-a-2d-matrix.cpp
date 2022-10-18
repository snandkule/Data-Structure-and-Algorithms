class Solution {
public:
    int getpos(vector<int>& A, int B){
        
        long start = 0, end = A.size()-1;
        while(start<=end){
            long mid = (start + end)/2;
            
            if(A[mid]==B)return mid;
            else if(A[mid]<B)start = mid+1;
            else end = mid -1;
        }
        return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
        int start = 0;
        
        for(int i =1;i<matrix.size();i++){
            if(matrix[i][0]<=target)start = i;
        }
        
        int pos = getpos(matrix[start], target);
        if(pos!=-1)return true;
        return false;
    }
};