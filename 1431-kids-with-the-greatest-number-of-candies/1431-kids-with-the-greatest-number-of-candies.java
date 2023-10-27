class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
     
        List<Boolean> ans = new ArrayList<Boolean>();
        int maxcandie = candies[0];
        for(int i=1;i<candies.length;i++){
            if(maxcandie<candies[i])
                maxcandie = candies[i];
        }
        for(int i=0;i<candies.length;i++){
            if(candies[i]+extraCandies>=maxcandie){
                ans.add(true);
            }else{
                ans.add(false);
            }
        }
        return ans;
        
    }
}