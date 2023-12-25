class Solution {
    Set<List<Integer>> ans = new HashSet<>();
    
    void checkCombination(int[] candidates, int index, List<Integer> arr, int currSum, int target){
        if(currSum>target){
            return;
        }
        if(index>=candidates.length && currSum!=target){
            return;
        }
        if(currSum==target){
            ans.add(new ArrayList<>(arr));
            return;
        }
        // List<Integer> arr1 = new ArrayList<>(arr);
        checkCombination(candidates, index+1, arr,currSum,target);
        currSum+=candidates[index];
        // List<Integer> arr2 = new ArrayList<>(arr);
        arr.add(candidates[index]);
        checkCombination(candidates, index, arr,currSum,target);
        checkCombination(candidates, index+1, arr,currSum,target);
        arr.remove(arr.size()-1);
    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<Integer> arr = new ArrayList<>();
        checkCombination(candidates,0, arr, 0, target);
        List<List<Integer>> anslist = new ArrayList<>(ans);
        return anslist;
    }
}