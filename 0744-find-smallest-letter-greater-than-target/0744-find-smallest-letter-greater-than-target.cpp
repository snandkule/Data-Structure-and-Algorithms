class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int start = 0, end = letters.size(), mid = 0;
        while(start<end){
            mid = (start+end)/2;
            if(letters[mid]<=target){
                start = mid+1;
            }else {
                end = mid;
            }
        }
        return letters[start % letters.size()];
        
        // return target;
        
    }
};