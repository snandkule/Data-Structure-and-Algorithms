class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        
        for(int i =0 ; i<flowerbed.length; i++){
            if(flowerbed[i]==0 && i>0 && flowerbed[i-1]==0 && i<flowerbed.length-1 && flowerbed[i+1]==0){
                n--;
                flowerbed[i]=1;
            }else if(flowerbed[i]==0 && i==0 && i<flowerbed.length-1 && flowerbed[i+1]==0){
                n--;
                flowerbed[i]=1;
            }else if(flowerbed[i]==0 && i>0 && flowerbed[i-1]==0 && i==flowerbed.length-1 ){
                n--;
                flowerbed[i]=1;
            }else if(flowerbed[i]==0 &&  flowerbed.length==1){
                n--;
                flowerbed[i]=1;
            }
        }
        if(n>0)return false;
        return true;
        
    }
}