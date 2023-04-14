class Solution {
public:
    vector<int> getRow(int A) {
         vector<int> arr1(A+1,0);
    vector<int> arr2(A+1,0);
    arr1[0]=1;
    
    for(int i=1;i<=A;i++){
        arr2[0] = 1;
        arr2[i] = 1;
        for(int j = 1; j< i ; j++){
            arr2[j] = arr1[j] + arr1[j-1];
        }
        arr1 = arr2;
    }
    return arr1;
    }
};