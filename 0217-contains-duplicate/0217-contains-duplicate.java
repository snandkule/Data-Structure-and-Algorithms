class Solution {
    public boolean containsDuplicate(int[] nums) {
//         Set<Integer> s1 = new HashSet<Integer>();

//         for(int n: nums){
//             if(s1.contains(n)){
//                 return true;
//             }
//             s1.add(n);
//         }
//         return false;
        
        Set<Integer> s1 = new HashSet<Integer>();

        for(int n: nums){
            s1.add(n);
        }
        return !(nums.length==s1.size());
    }
}